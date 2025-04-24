#include <stdio.h>
#include "funciones.h"

int main(void) {
    Semaforo estado = ROJO;
    int ciclos = 0;

    while (ciclos < 10) {
        mostrarMensaje(estado);
        estado = cambiarEstado(estado);
        ciclos++;
    }

    printf("Fin del ciclo de semáforo.\n");
    return 0;
}
