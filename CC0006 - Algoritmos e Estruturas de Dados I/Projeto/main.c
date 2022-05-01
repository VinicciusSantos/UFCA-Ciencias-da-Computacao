#include <stdio.h>
#include <stdlib.h>
#include "parade.h"

int main(void)
{
    Lista *l;
    Pilha *p;
    l = Li_criar();
    p = Pi_criar();

    struct carta a;
    a.numero = 5;
    a.naipe = 'a';

    struct carta b;
    b.numero = 8;
    b.naipe = 'f';

    struct carta c;
    c.numero = 0;
    c.naipe = 'c';

    struct carta d;
    d.numero = 7;
    d.naipe = 'd';

    Pi_inserir(l, a);
    Pi_inserir(l, b);
    Pi_inserir(l, c);
    Pi_inserir(l, d);
    Pi_imprimir(l);
    Pi_tamanho(p);
    return 0;
}