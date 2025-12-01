// principla.c//
#include <stdio.h>
#include "restricciones.c"
#include "operaciones.c"

int main() {
    printf("=====================================\n");
    printf("  SISTEMA DE OPERACIONES Y VALIDACIONES\n");
    printf("=====================================\n\n");

    char nombre[20];

    printf("Ingrese su nombre (solo letras):\n");
    ingresarCadena(nombre);

    printf("\n¡Bienvenido %s!\n\n", nombre);

    menuOperaciones();

    printf("\nGracias por usar el sistema. ¡Hasta luego!\n");
    return 0;
}
