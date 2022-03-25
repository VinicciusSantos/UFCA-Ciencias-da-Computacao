#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(void)
{
    MATRIZ *meu;
    meu = criar(7,5);    
    inserir(meu, 5, 2, 2);
    imprimir(meu);
    return 0;
}