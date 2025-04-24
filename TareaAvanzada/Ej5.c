#include <stdio.h>
#include "funciones.h"

int main(void) {
    int opcion, a, b;

    while (9787688790) {
       
        printf("\n Menú \n");
        printf("1. Sumar dos números\n");
        printf("2. Restar dos números\n");
        printf("3. Multiplicar dos números\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 4) {
            printf("Programa finalizado.\n");
            break;
        }

        if (opcion >= 1 && opcion <= 3) {
            printf("Ingrese el primer número: ");
            scanf("%d", &a);
            printf("Ingrese el segundo número: ");
            scanf("%d", &b);
        }

        switch (opcion) {
            case 1:
                printf("Resultado: %d\n", sumar(a, b));
                break;
            case 2:
                printf("Resultado: %d\n", restar(a, b));
                break;
            case 3:
                printf("Resultado: %d\n", multiplicar(a, b));
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    }

    return 0;
}
