#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main(void)
{
    Ponto *meuPonto, *meuOutroPonto;
    meuPonto = criar(1.5, 2.6);
    meuOutroPonto = criar(6.7, 9);
    exibir(meuPonto);
    exibir(meuOutroPonto);
}