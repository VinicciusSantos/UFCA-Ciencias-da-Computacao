#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(void)
{
    Arvore *arv = Criar();
    InserirNo(arv, 5);

    InserirNo(arv, 7);
    InserirNo(arv, 9);

    Imprimir(arv);
}