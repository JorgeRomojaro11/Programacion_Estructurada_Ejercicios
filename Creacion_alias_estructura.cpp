#include <stdio.h>
#include <string.h>

// Definir la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Crear un alias para la estructura Estudiante usando typedef
typedef struct Estudiante Estudiante;
