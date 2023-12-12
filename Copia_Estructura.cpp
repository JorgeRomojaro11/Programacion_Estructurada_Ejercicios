#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Estudiante copiarEstudiante(struct Estudiante original) {
    struct Estudiante copia;

    strcpy(copia.nombre, original.nombre);
    copia.edad = original.edad;
    copia.promedio = original.promedio;

    return copia;
}

int main() {
    struct Estudiante estudianteOriginal = {"Marta Diaz", 20, 85.5};
    struct Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    printf("Original: Nombre: %s, Edad: %d, Promedio: %f\n", estudianteOriginal.nombre, estudianteOriginal.edad, estudianteOriginal.promedio);
    printf("Copia: Nombre: %s, Edad: %d, Promedio: %f\n", estudianteCopia.nombre, estudianteCopia.edad, estudianteCopia.promedio);

    return 0;
}

