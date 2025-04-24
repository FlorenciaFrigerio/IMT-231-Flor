
#include <stdio.h>
#include "funciones.h"

int esPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

void contarParesImpares(int numero) {
    int pares = 0, impares = 0;
    printf("Nmeros:");
    for (int i = 1; i <= numero; i++) {
        printf(" %d", i);
        if (i % 2 == 0) pares++;
        else impares++;
    }
    printf("\nCantidad de pares: %d\n", pares);
    printf("Cantidad de impares: %d\n", impares);
}

void mostrarMultiplosDe3(int limite) {
    printf("Multiplos de 3 hasta %d:\n", limite);
    for (int i = 1; i <= limite; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
