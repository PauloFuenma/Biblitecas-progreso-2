//RESTRICCIONES.C//
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#ifndef RESTRICCIONES_H
#define RESTRICCIONES_H

int ingresarEntero();          // Solo números enteros
void ingresarCadena(char *c);  // Solo letras (sin números)

#endif

int ingresarEntero() {
    char buffer[50];
    int valido;

    do {
        valido = 1;
        printf("Ingrese un numero entero: ");
        scanf("%s", buffer);

        for(int i = 0; buffer[i] != '\0'; i++) {
            if(!isdigit(buffer[i])) {
                printf("Error: Solo se permiten numeros.\n");
                valido = 0;
                break;
            }
        }
    } while(!valido);

    return atoi(buffer);
}

void ingresarCadena(char *c) {
    int valido;
    do {
        valido = 1;
        printf("Ingrese una cadena solo con letras: ");
        scanf("%s", c);

        for(int i = 0; c[i] != '\0'; i++) {
            if(!isalpha(c[i])) {
                printf("Error: Solo se permiten letras.\n");
                valido = 0;
                break;
            }
        }
    } while(!valido);
}
