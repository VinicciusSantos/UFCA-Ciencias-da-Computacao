#include <stdio.h>
#include <stdlib.h>
#include "parade.h"

int main(void)
{
    Lista *l;
    l = criar();
    
    struct carta a;
    a.valor = 5;
    a.cor = 'a';

    struct carta b;
    b.valor = 8;
    b.cor = 'f';

    struct carta c;
    c.valor = 0;
    c.cor = 'c';

    struct carta d;
    d.valor = 7;
    d.cor = 'd';

    inserirInicio(l, a);
    inserirInicio(l, b);
    inserirInicio(l, c);
    inserirInicio(l, d);
    imprimir(l);
    printf("\n");

    removerQualquer(l, c);
    imprimir(l);

    acessarIndice(l, 1);
    return 0;
}