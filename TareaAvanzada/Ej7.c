#include <stdio.h>
#include "funciones.h"

int main(void) {
    int numero, contador = 0;

    while (1) {
        printf("Ingrese un número y -1 para salir: ");
        scanf("%d", &numero);

        if (numero == -1) {
            printf("Cantidad total de múltiplos de 3 ingresados: %d\n", contador);
            break;
        }

        if (esMultiploDe3(numero)) {
            contador++;
        }
    }

    return 0;
}
