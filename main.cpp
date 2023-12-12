#include <stdio.h>
#include <stdlib.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Estudiante estudiante1;
estudiante1.edad = 20;
estudiante1.promedio = 85.5;
strcpy(estudiante1.nombre, "Marta Diaz");

struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
estudiante2->edad = 22;
estudiante2->promedio = 90.0;
strcpy(estudiante2->nombre, "Xokas Garcia");


