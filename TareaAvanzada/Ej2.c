#include <stdio.h>
#include "funciones.h"
int main(void) {
    int numero;

    while (1) {
        printf("Ingrese un número positivo (0 para salir): ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Programa terminado.\n");
            break;
        }

        printf("El número tiene %d dígitos.\n", contarDigitos(numero));
    }

    return 0;
}

 