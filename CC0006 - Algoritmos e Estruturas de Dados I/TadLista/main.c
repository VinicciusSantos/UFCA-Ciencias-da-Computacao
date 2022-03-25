#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

int main(void)
{
    TAD *meu, *reverso, *juntos;
    meu = criar(10);

    inserirUltimo(meu, 5);
    inserirUltimo(meu, 15);
    inserirUltimo(meu, 8);
    inserirUltimo(meu, 57);
    inserirUltimo(meu, 5);
    inserirInicio(meu, 3);

    int meu_qtd = quantidade(meu);
    printf("Quantidade: %d\n", meu_qtd);

    buscar(meu, 5);

    imprimir(meu);
    inserirOrdenado(meu, 16);
    imprimir(meu);
    
    reverso = inverter(meu);
    imprimir(reverso);

    juntos = concaternar(meu, reverso);
    imprimir(juntos);

    inserirIndice(juntos, 66, 6);
    imprimir(juntos);
    destruir(meu);
    return 0;
}