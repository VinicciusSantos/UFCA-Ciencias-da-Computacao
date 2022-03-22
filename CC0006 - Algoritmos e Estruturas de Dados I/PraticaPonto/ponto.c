#include "ponto.h"
#include <stdio.h>
#include <stdlib.h>

struct ponto
{
    float x;
    float y;
};

Ponto* criar(float x, float y)
{
    Ponto* p;
    p = (Ponto*)malloc(sizeof(struct ponto));

    if (p == NULL)
    {
        printf("Erro de Alocação!\n");
        return NULL;
    }

    p->x = x;
    p->y = y; 
    return p;
}

void destruir(Ponto* p)
{
    free(p);
    printf("Memória do Ponto Liberada! \n");
}


void acessar(Ponto* p, float* x, float* y)
{
    *x = p->x;
    *y = p->y;
}


void atribuir(Ponto* p, float x, float y)
{
    p->x = x;
    p->y = y;
}


void exibir(Ponto* p)
{
    printf("(%f, %f) \n", p->x, p->y);
}


float distancia(Ponto* p1, Ponto* p2)
{
    float dx, dy;
    dx = p2->x - p1->x;
    dy = p2->y - p1->y;
}
