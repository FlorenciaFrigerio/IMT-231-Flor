
#include <stdio.h>

int main(void) {
    int N, i = 1;

    printf("Ingrese un número entero N: ");
    scanf("%d", &N);

    while (i <=N) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}