#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
typedef struct Estudiante Estudiante;
void imprimirEstudiante(Estudiante estudiante) {
    printf("Nombre: %s, Edad: %d, Promedio: %f\n", estudiante.nombre, estudiante.edad, estudiante.promedio);
}

int main() {
    Estudiante nuevoEstudiante = {"Eustaquio Habichuela", 33, 73.25};
    printf("Nuevo Estudiante:\n");
    imprimirEstudiante(nuevoEstudiante);

    return 0;
}

