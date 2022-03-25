#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int main(void)
{
    TAD *meu;

    meu = criar(7);  

    printf("\n");
    inserir(meu, 2);
    inserir(meu, 7);
    inserir(meu, 3);
    inserir(meu, 12);
    inserir(meu, 56);
    inserir(meu, 10);
    inserir(meu, 1);
    inserir(meu, 78);

    printf("\n");
    imprimir(meu);
    remover(meu);
    imprimir(meu);

    printf("\n");
    int qtd = quantidade(meu);
    printf("Quantidade: %d\n", qtd);

    printf("\n");
    buscar(meu, 3);

    printf("\n");
    imprimir(meu);
    removerPrimeiro(meu);
    imprimir(meu);

    printf("\n");
    imprimir(meu);
    removerIndice(meu, 2);
    imprimir(meu);

    printf("\n");
    destruir(meu);
    return 0;
}