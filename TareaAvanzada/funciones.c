#include <stdio.h>
#include "funciones.h"
//int parImpar(int a){
  //  return a%2==0;
//}
int contarDigitos(int numero) {
    int contador = 0;
    if (numero == 0) return 1;

    while (numero != 0) {
        numero /= 10;
        contador++;
    }

    return contador;
}
//Semaforo cambiarEstado(Semaforo estado) {
  //  switch (estado) {
    //    case ROJO:
      //      return VERDE;
        //case VERDE:
          //  return AMARILLO;
        //case AMARILLO:
          //  return ROJO;
    //}
    //return ROJO; 
//}


//void mostrarMensaje(Semaforo estado) {
  //  switch (estado) {
    //    case ROJO:
      //      printf("Semáforo en ROJO: Detente.\n");
        //    break;
        //case VERDE:
          //  printf("Semáforo en VERDE: Avanza.\n");
            //break;
        //case AMARILLO:
          //  printf("Semáforo en AMARILLO: Precaución.\n");
            //break;
  //  }
//}

//int sumar(int nuevo, int ingresado){
 //   return nuevo+ingresado;
//}


int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}


void comparar(int a, int b) {
    if (a > b) {
        printf("El primer número (%d) es mayor.\n", a);
    } else if (b > a) {
        printf("El segundo número (%d) es mayor.\n", b);
    } else {
        printf("Ambos números son iguales.\n");
    }
}

int esMultiploDe3(int numero) {
    return numero % 3 == 0;
}

#include "funciones.h"

long long factorial(int n) {
    long long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}