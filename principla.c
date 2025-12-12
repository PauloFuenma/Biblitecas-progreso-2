// ============================================================
//  BIBLIOTECA DE EJEMPLO: ESTRUCTURAS + PUNTEROS + OPERACIONES
// ============================================================

#include <stdio.h>
#include "Restricciones.c"   // Biblioteca de restricciones
#include "operaciones.c"     // Biblioteca de operaciones matemáticas

// ============================================================
//  PARTE 1: STRUCT + PUNTEROS (EJEMPLO COMPLETO)
// ============================================================

// Estructura Libro
// Esta estructura sirve como un "molde" que guarda información.
// Se accede con punteros usando ->
typedef struct {
    char titulo[50];
    char autor[50];
    int anio;
} Libro;

// Prototipos de funciones
void mostrarLibro(Libro *p);
void cambiarTitulo(Libro *p, const char *nuevoTitulo);
void cambiarAnio(Libro *p, int nuevoAnio);
void incrementarAnio(Libro *p);

// ============================================================
//  PARTE 2: FUNCIÓN PRINCIPAL DE EJEMPLO
// ============================================================

int main() {

    // ================== EJEMPLO DE STRUCT + PUNTEROS ==================

    Libro libro1 = {"C Programming Language", "Kernighan & Ritchie", 1978};

    // Puntero que apunta a un struct Libro
    Libro *ptrLibro = &libro1;

    printf("\n====== DATOS INICIALES DEL LIBRO ======\n");
    mostrarLibro(ptrLibro);

    // Modificaciones usando punteros
    cambiarTitulo(ptrLibro, "Aprendiendo C facilito");
    cambiarAnio(ptrLibro, 2025);
    incrementarAnio(ptrLibro);

    printf("\n====== DATOS MODIFICADOS ======\n");
    mostrarLibro(ptrLibro);

    // ================== VALIDACIONES Y OPERACIONES ==================

    char nombre[20];

    printf("\nIngrese su nombre (solo letras): ");
    ingresarCadena(nombre);

    printf("\nBienvenido %s\n", nombre);

    menuOperaciones();

    printf("\nGracias por usar el sistema. ¡Hasta luego!\n");
    return 0;
}

// ============================================================
//  FUNCIONES DE STRUCT + PUNTEROS
//
