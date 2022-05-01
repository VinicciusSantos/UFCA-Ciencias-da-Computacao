#include <stdio.h>
#include <stdlib.h>
#include "parade.h"

// cd Documentos/GitHub/UFCA-Ciencias-da-Computacao/CC0006\ -\ Algoritmos\ e\ Estruturas\ de\ Dados\ I/Projeto/
// gcc -c main.c parade.c && gcc -o main main.o parade.o && ./main

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

    Pi_inserir(p, a);
    Pi_inserir(p, b);
    Pi_inserir(p, c);
    Pi_inserir(p, d);
    Pi_imprimir(p);
    Pi_tamanho(p);
    return 0;
}