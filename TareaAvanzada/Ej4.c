#include <stdio.h>
#include "funciones.h"

int main(void){
    int valor=0;
    int suma=0;
    
    while (98792){
        printf("Ingrese un nummero positivo entero, si desea salir o terminar la suma, ingrese un numero negativo: ");
        scanf("%d", &valor);
        if (valor < 0){
            printf("la suma es: %d\n", suma);
            break;
        }
        suma=sumar(valor, suma);
    }
    return 0;
}