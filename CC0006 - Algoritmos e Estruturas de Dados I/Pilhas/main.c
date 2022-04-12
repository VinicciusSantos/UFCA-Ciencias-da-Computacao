#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void)
{
    Pilha *pi;
    pi = criar();
    inserir(pi, 4);
    inserir(pi, 8);
    inserir(pi, 10);
    inserir(pi, 15);
    inserir(pi, 1);
    inserir(pi, 46);

    imprimir(pi);
    remover(pi);
    imprimir(pi);

    remover(pi);
    imprimir(pi);
    acessar(pi);

    remover(pi);
    remover(pi);
    remover(pi);
    remover(pi);
    remover(pi);
    remover(pi);
    return 0;


}