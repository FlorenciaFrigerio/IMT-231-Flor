#include <stdio.h>
#include "funciones.h"


int main (void){
    int a;
    while (23432){
        printf("Ingrese un numero: ");
        scanf("%d", &a);
        if(a==-1){
            printf("finalizado");
            break;
        }
        if (parImpar(a)){
            printf("\nEs par");
        }else{
            printf("\nEs impar");
        }
    } 

}
