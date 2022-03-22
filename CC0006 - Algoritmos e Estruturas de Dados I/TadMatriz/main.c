#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(void)
{
    Matriz *x = criar(5,5);
    imprimir(x);
    atribuir(x, 3, 4, 5.5);
    printf("\n");
    imprimir(x);
    return 0;
}
