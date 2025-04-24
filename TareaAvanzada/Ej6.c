#include <stdio.h>
#include "funciones.h"
int main(void) {
    int a, b;

    while (1) {
        printf("\nIngrese dos número y 0 0 para salir): ");
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0) {
            printf("Programa terminado.\n");
            break;
        }

        comparar(a, b);
    }

    return 0;
}