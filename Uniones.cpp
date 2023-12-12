#include <stdio.h>

union Datos {
    int entero;
    float flotante;
    char cadena[50];
};

int main() {
    union Datos misDatos;
    misDatos.entero = 10;
    printf("Entero: %d\n", misDatos.entero);
    misDatos.flotante = 3.14;
    printf("Flotante: %f\n", misDatos.flotante);
    printf("Cadena: %s\n", misDatos.cadena);

    return 0;
}



