#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

struct matriz
{
    int linha;
    int coluna;
    float **valores; 
};

Matriz* criar(int l, int c)
{
    Matriz* m;
    m = (Matriz*)malloc(sizeof(struct matriz));

    if (m == NULL)
    {
        printf("Erro de Alocação!\n");
        return NULL;
    }

    m->linha = l;
    m->coluna = c;
    m->valores = (float **)malloc(sizeof(float*) * l);

    for (int i = 0; i < l; i++)
    {
        m->valores[i] = (float*)malloc(sizeof(float) * c);
        for (int j = 0; j < c; j++)
        {
            m->valores[i][j] = 0;
        }
    }
    return m;
}

void destruir(Matriz* m)
{
    for (int i = 0; i < m->linha; i++)
    {
        free(m->valores[i]);
    }
    free(m->valores);
    free(m);
}

float acessarValor(Matriz* m, int l, int c)
{
    return m->valores[l][c];
}

int numeroLinhas(Matriz* m)
{
    return m->linha;
}                   

int numeroColunas(Matriz* m)
{
    return m->coluna;
}

void atribuir(Matriz* m, int l, int c, float valor)
{
    m->valores[l-1][c-1] = valor;
}

void imprimir(Matriz* m)
{
    for (int i = 0; i < m->linha; i++)
    {
        for (int j = 0; j < m->coluna; j++)
        {
            printf("%.2f\t", m->valores[i][j]);
        }
        printf("\n");
    }
}
