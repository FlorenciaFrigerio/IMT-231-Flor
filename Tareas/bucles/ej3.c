#include <stdio.h>

int main(void) {
    int x, i;

    printf("Ingrese un número para ver su tabla de multiplicar: ");
    scanf("%d", &x);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

    return 0;
}