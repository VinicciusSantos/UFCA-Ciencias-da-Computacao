#include <stdio.h>
#include <stdlib.h>
#include "parade.h"
#include <time.h>

// cd Documentos/GitHub/UFCA-Ciencias-da-Computacao/CC0006\ -\ Algoritmos\ e\ Estruturas\ de\ Dados\ I/Projeto/
// gcc -c main.c parade.c && gcc -o main main.o parade.o && ./main

int main(void)
{
    Lista *l;
    Pilha *p;
    l = Li_criar();
    p = Pi_criar();

    // Criando as 66 cartas:
    char naipes[] = {'a', 'b', 'c', 'd', 'e', 'f'}; 
    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 11; i++)
        {
            struct carta a = {i, naipes[j]};
            Pi_inserir(p, a);
        }
    }

    printf("Tamanho: %d\n", Pi_tamanho(p));

    Pi_imprimir(p);

    Pi_embaralhar(p);
    Pi_imprimir(p);

    Pi_embaralhar(p);
    Pi_imprimir(p);

    Pi_embaralhar(p);
    Pi_imprimir(p);
    return 0;
}