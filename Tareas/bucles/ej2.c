#include <stdio.h>

int main(void) {
    int N, i, suma = 0;

    printf("Ingrese un número entero N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        suma += i; 
    }

    printf("La suma de los primeros %d números naturales es: %d\n", N, suma);

    return 0;
}
