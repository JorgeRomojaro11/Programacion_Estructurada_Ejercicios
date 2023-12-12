#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void imprimirEstudiantePorValor(struct Estudiante estudiante) {
    printf("a. Por Valor: Nombre: %s, Edad: %d, Promedio: %f\n", estudiante.nombre, estudiante.edad, estudiante.promedio);
}
void imprimirEstudiantePorReferencia(struct Estudiante *estudiante) {
    printf("b. Por Referencia: Nombre: %s, Edad: %d, Promedio: %f\n", estudiante->nombre, estudiante->edad, estudiante->promedio);
}
void imprimirEstudiantePorDireccion(struct Estudiante *estudiante) {
    printf("c. Por Dirección: Nombre: %s, Edad: %d, Promedio: %f\n", estudiante->nombre, estudiante->edad, estudiante->promedio);
}
