#include <stdio.h>

int main(void) {
    int numero, contador = 0;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    if (numero == 0) {
        contador = 1; 
    } else {
        if (numero < 0) {
            numero = -numero; 
        }

        while (numero > 0) {
            numero = numero / 10;
            contador++;
        }
    }

    printf("El número tiene %d dígitos.\n", contador);

    return 0;
}