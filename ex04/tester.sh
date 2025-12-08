#!/bin/bash

# ================= CONFIGURACIÓN =================
# Nombre de tu ejecutable (cámbialo si tu Makefile genera otro nombre)
PROG="./sed"
# Archivo de prueba temporal
TESTFILE="test_input.txt"

# Colores para la salida
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# ================= FUNCIONES =================

function print_result {
    if [ $1 -eq 0 ]; then
        echo -e "${GREEN}[OK]${NC} $2"
    else
        echo -e "${RED}[KO]${NC} $2"
    fi
}

# ================= COMPILACIÓN =================
echo "--- 🔨 Compilando ---"
make re
if [ ! -f $PROG ]; then
    echo -e "${RED}Error: No se encuentra el ejecutable $PROG. Revisa la variable PROG en el script.${NC}"
    # Intenta adivinar si el usuario usó otro nombre
    PROG=$(find . -maxdepth 1 -type f -perm -111 -not -name "*.sh" -not -name "Makefile" | head -n 1)
    echo "Usando ejecutable encontrado: $PROG"
fi
echo ""

# ================= PRUEBAS =================

echo "--- 🧪 Iniciando Tests ---"

# 1. Reemplazo Básico
echo "Hola mundo" > $TESTFILE
$PROG $TESTFILE "mundo" "42"
if grep -q "Hola 42" "${TESTFILE}.replace"; then
    print_result 0 "Reemplazo básico (mundo -> 42)"
else
    print_result 1 "Reemplazo básico falló"
fi

# 2. Múltiples ocurrencias
echo "uno uno uno" > $TESTFILE
$PROG $TESTFILE "uno" "dos"
if grep -q "dos dos dos" "${TESTFILE}.replace"; then
    print_result 0 "Múltiples ocurrencias (uno -> dos)"
else
    print_result 1 "Múltiples ocurrencias falló"
fi

# 3. Borrado (Reemplazar por string vacío)
# NOTA: En bash pasar "" como argumento requiere cuidado
echo "Borrar esto" > $TESTFILE
$PROG $TESTFILE "esto" ""
if grep -q "Borrar " "${TESTFILE}.replace"; then # Debe quedar "Borrar "
    print_result 0 "Borrar palabra (esto -> \"\")"
else
    print_result 1 "Borrar palabra falló"
fi

# 4. Prueba de Bucle Infinito (El caso peligroso)
# Si tu lógica p += len está mal, esto se colgará
echo "a" > $TESTFILE
timeout 1s $PROG $TESTFILE "a" "ba" # Timeout mata el proceso si tarda > 1s
RET=$?
if [ $RET -eq 124 ]; then
    print_result 1 "BUCLE INFINITO DETECTADO (a -> ba)"
else
    if grep -q "ba" "${TESTFILE}.replace"; then
        print_result 0 "Prevención de bucle infinito (a -> ba)"
    else
        print_result 1 "Fallo lógico en a -> ba"
    fi
fi

# 5. Archivo inexistente
$PROG "no_existo.txt" "a" "b" 2> /dev/null
if [ $? -ne 0 ]; then
    print_result 0 "Gestión de archivo inexistente"
else
    print_result 1 "El programa no devolvió error con archivo falso"
fi

# 6. Permisos de archivo (Input bloqueado)
touch locked_in.txt
chmod 000 locked_in.txt
$PROG locked_in.txt "a" "b" 2> /dev/null
if [ $? -ne 0 ]; then
    print_result 0 "Gestión de permisos de lectura (Input)"
else
    print_result 1 "El programa leyó un archivo sin permisos"
fi
chmod 644 locked_in.txt # Limpieza
rm locked_in.txt

# 7. Argumentos incorrectos
$PROG $TESTFILE "a" 2> /dev/null
if [ $? -ne 0 ]; then
    print_result 0 "Gestión de argumentos insuficientes"
else
    print_result 1 "El programa aceptó menos argumentos"
fi

# 8. S1 Vacío (Búsqueda vacía)
$PROG $TESTFILE "" "b" 2> /dev/null
if [ $? -ne 0 ]; then
    print_result 0 "Gestión de string de búsqueda vacío"
else
    print_result 1 "El programa aceptó s1 vacío (Peligro de bucle)"
fi

# 9. Prueba Multi-línea (Integridad estructural)
# Creamos un archivo con varias líneas
echo -e "Hola mundo\nEsta es una linea sin cambios\nY aqui otro mundo\nFin del archivo" > $TESTFILE

# Creamos lo que ESPERAMOS obtener (el archivo perfecto)
echo -e "Hola 42\nEsta es una linea sin cambios\nY aqui otro 42\nFin del archivo" > expected.txt

# Ejecutamos tu programa
$PROG $TESTFILE "mundo" "42"

# Comparamos tu salida con la esperada usando diff
if diff "${TESTFILE}.replace" expected.txt > /dev/null; then
    print_result 0 "Multi-línea (Estructura y saltos de línea correctos)"
else
    print_result 1 "Multi-línea falló. Tu archivo no coincide exactamente."
    echo "--- Diferencias encontradas: ---"
    diff "${TESTFILE}.replace" expected.txt
fi
rm expected.txt


# ================= LIMPIEZA =================
echo ""
echo "--- 🧹 Limpiando archivos temporales ---"
rm -f $TESTFILE
rm -f *.replace
make fclean > /dev/null
echo "Hecho."
