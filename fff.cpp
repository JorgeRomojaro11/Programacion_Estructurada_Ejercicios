#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Nodo {
    struct Estudiante estudiante;
    struct Nodo *siguiente;
};

struct Lista {
    struct Nodo *inicio;
};

void agregarEstudiante(struct Lista *lista, struct Estudiante estudiante) {
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    nuevoNodo->estudiante = estudiante;
    nuevoNodo->siguiente = lista->inicio;
    lista->inicio = nuevoNodo;
}

void verEstudiantes(struct Lista *lista) {
    struct Nodo *actual = lista->inicio;
    while (actual != NULL) {
        printf("Nombre: %s, Edad: %d, Promedio: %f\n", actual->estudiante.nombre, actual->estudiante.edad, actual->estudiante.promedio);
        actual = actual->siguiente;
    }
}

void eliminarEstudiante(struct Lista *lista, char nombreEliminar[50]) {
    struct Nodo *actual = lista->inicio;
    struct Nodo *anterior = NULL;

    while (actual != NULL && strcmp(actual->estudiante.nombre, nombreEliminar) != 0) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual != NULL) {
        if (anterior == NULL) {
            lista->inicio = actual->siguiente;
        } else {
            anterior->siguiente = actual->siguiente;
        }
        free(actual);
    } else {
        printf("Estudiante no encontrado.\n");
    }
}

int main() {
    struct Lista listaEstudiantes;
    listaEstudiantes.inicio = NULL;

    struct Estudiante estudiante1 = {"Juan Perez", 20, 85.5};
    struct Estudiante estudiante2 = {"Maria Rodriguez", 22, 90.0};

    agregarEstudiante(&listaEstudiantes, estudiante1);
    agregarEstudiante(&listaEstudiantes, estudiante2);

    printf("Lista de Estudiantes:\n");
    verEstudiantes(&listaEstudiantes);

    char nombreEliminar[50];
    printf("Ingrese el nombre del estudiante a eliminar: ");
    scanf("%s", nombreEliminar);
    eliminarEstudiante(&listaEstudiantes, nombreEliminar);

    printf("Lista después de eliminar estudiante:\n");
    verEstudiantes(&listaEstudiantes);

    return 0;
}

