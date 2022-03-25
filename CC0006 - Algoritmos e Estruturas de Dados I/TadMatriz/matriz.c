#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

struct matriz
{
    int linhas;
    int colunas;
    float **valores;
};


MATRIZ* criar(int l, int c)
{
    MATRIZ *nova;
    nova = (MATRIZ*)malloc(sizeof(struct matriz));

    if (nova != NULL && l > 0 && c > 0)
    {
        nova->linhas = l;
        nova->colunas = c;
        nova->valores = (float**)malloc(sizeof(float*)*l);

        for (int i = 0; i < l; i++)
        {
            nova->valores[i] = (float*)malloc(sizeof(float)*c);
            for (int j = 0; j < c; j++)
            {
                nova->valores[i][j] = 0;
            }   
        }
        return nova;
    }
}

MATRIZ* crarIdentidade(int i)
{
    MATRIZ *identidade
}

void imprimir(MATRIZ* m)
{
    if (m != NULL)
    {
        printf("Imprimindo:\n\n");
        for (int c = 0; c < m->colunas; c++)
        {
            printf("\t[%d]", c);
        }
        printf("\n\n");

        for (int i = 0; i < m->linhas; i++)
        {
            printf("[%d]", i);
            for (int j = 0; j < m->colunas; j++)
            {
                printf("\t%.1f", m->valores[i][j]);
            }
            printf("\n\n");
        }
    }
}

int linhas(MATRIZ* m)
{
    if (m != NULL)
    {
        return m->linhas;
    }
}

int colunas(MATRIZ* m)
{
    if (m != NULL)
    {
        return m->colunas;
    }
}

void inserir(MATRIZ* m, int valor, int l, int c)
{
    if (m != NULL)
    {
        m->valores[l][c] = valor;
    }
}