#include <stdio.h>
#include <stdlib.h>
#include "ldde.h"

int main(void)
{
    Lista* li;
    li = criar(li);

    inserirOrdenado(li, 4);
    inserirOrdenado(li, 5);
    inserirOrdenado(li, 8547);
    inserirOrdenado(li, 1);
    inserirOrdenado(li, 7);
    imprimir(li);

    imprimirInvertido(li);
}