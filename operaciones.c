// operaciones.c//
#include <stdio.h>
#include <stdlib.h>

// Declaraciones de funciones
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int contarProductos();
void menuOperaciones();

// Esta función valida que ingresen un número entero
int ingresarEntero() {
    char buffer[50];
    int valido;

    do {
        valido = 1;
        printf("Ingrese un numero entero: ");
        scanf("%s", buffer);

        for(int i = 0; buffer[i] != '\0'; i++) {
            if(buffer[i] < '0' || buffer[i] > '9') {
                printf("Error: Solo se permiten numeros.\n");
                valido = 0;
                break;
            }
        }
    } while(!valido);

    return atoi(buffer);
}

// Funciones matemáticas
int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }

float dividir(int a, int b) {
    if(b == 0) {
        printf("Error: No se puede dividir entre 0\n");
        return 0;
    }
    return (float)a / b;
}

// Contar productos (ejemplo tipo menú)
int contarProductos() {
    printf("Ingrese la cantidad de productos:\n");
    int cant = ingresarEntero();
    printf("Cantidad ingresada: %d\n", cant);
    return cant;
}

// Menú principal
void menuOperaciones() {
    int op, a, b;

    do {
        printf("\n====== MENU OPERACIONES ======\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Contar productos\n");
        printf("0. Salir\n");
        printf("Seleccione opcion: ");
        op = ingresarEntero();

        if(op >= 1 && op <= 4) {
            printf("Ingrese el primer numero:\n");
            a = ingresarEntero();
            printf("Ingrese el segundo numero:\n");
            b = ingresarEntero();
        }

        switch(op) {
            case 1: printf("Resultado: %d\n", sumar(a, b)); break;
            case 2: printf("Resultado: %d\n", restar(a, b)); break;
            case 3: printf("Resultado: %d\n", multiplicar(a, b)); break;
            case 4: printf("Resultado: %.2f\n", dividir(a, b)); break;
            case 5: contarProductos(); break;
            case 0: printf("Saliendo...\n"); break;
            default: printf("Opcion invalida\n");
        }

    } while(op != 0);
}
