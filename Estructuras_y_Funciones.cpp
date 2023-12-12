#include <stdio.h>

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

int main() {
    struct Estudiante estudiante1 = {"Marta Diaz", 20, 85.5};
    struct Estudiante estudiante2 = {"Xokas", 22, 90.0};
    struct Estudiante estudiante3 = {"Eustaquio Habichuela", 33, 73.25};

    imprimirEstudiantePorValor(estudiante1);
    imprimirEstudiantePorReferencia(&estudiante2);
    imprimirEstudiantePorDireccion(&estudiante3);

    return 0;
}