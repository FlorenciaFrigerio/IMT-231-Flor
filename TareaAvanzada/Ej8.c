#include <stdio.h>
#include "funciones.h"

int main(void) {
    int numero;

    while (1) {
        printf("Ingrese un número entero positivo (0 o negativo para salir): ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Programa terminado.\n");
            break;
        }

        printf("El factorial de %d es: %lld\n", numero, factorial(numero));
    }

    return 0;
}
