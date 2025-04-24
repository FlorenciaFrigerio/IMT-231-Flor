#include <stdio.h>
#include "funciones.h"

int pedirNumeroPositivo() {
    int numero;
    printf("Ingrese un numero entero y positivo: ");
    scanf("%d", &numero);
    while (numero < 0) {
        printf("Numero invalidoxd , ingrese uno positivo e intente nuevamente: ");
        scanf("%d", &numero);
    }
    return numero;
}

int main() {
    int opcion = 0;
    int numero;

    while (opcion != 5) {
        printf("\n Menú \n");
        printf("1. Verificar si un numero es primo\n");
        printf("2. Calcular factorial de un numero\n");
        printf("3. Contar pares e impares en un numero\n");
        printf("4. Mostrar multiplos de 3 hasta un numero\n");
        printf("5. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            numero = pedirNumeroPositivo();
            if (esPrimo(numero))
                printf("Es primo\n");
            else
                printf("No es primo\n");

        } else if (opcion == 2) {
            numero = pedirNumeroPositivo();
            printf("El factorial de %d es %d.\n", numero, factorial(numero));

        } else if (opcion == 3) {
            numero = pedirNumeroPositivo();
            contarParesImpares(numero);

        } else if (opcion == 4) {
            numero = pedirNumeroPositivo();
            mostrarMultiplosDe3(numero);

        } else if (opcion == 5) {
            printf("Saliendo del programa xd \n");

        } else {
            printf("Opcion invalida xd \n");
        }
    }

    return 0;
}
