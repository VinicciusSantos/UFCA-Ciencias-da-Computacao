#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

struct tad
{
    int qtd;
    int max;
    int *vetor;
};

TAD *criar(int tam)
{
    if (tam < 1) 
    {
        printf("Nao foi possível criar o TAD\n");
        return NULL;
    }

    TAD *novo;
    novo = (TAD *)malloc(sizeof(TAD));

    if (novo != NULL)
    {
        novo->qtd = 0;
        novo->max = tam;
        novo->vetor = (int *)malloc(sizeof(int)*tam);
        if (novo->vetor == NULL) return NULL;
        printf("Tad criado com sucesso!\n");
    }

    return novo;
}

void destruir(TAD* tad)
{
    if (tad != NULL) 
    {
        free(tad->vetor);
        free(tad);
        printf("Tad destruido com sucesso!\n");
        return;
    }
    printf("Não foi possível destruir o Tad!\n");
    return;
}

void imprimir(TAD* tad)
{
    if (tad == NULL)
    {
        printf("Não foi possível imprimir!\n");
        return;
    }
    printf("Imprimindo: ");
    for (int i = 0; i < tad->qtd; i++)
    {
        printf("%d ", tad->vetor[i]);
    }
    printf("\n");
}

void inserir(TAD* tad, int num)
{
    if (tad == NULL)
    {
        printf("Não foi possível inserir!\n");
        return;
    }

    if (tad->qtd >= tad->max)
    {
        printf("O Vetor já está no tamanho máximo!\n");
        return;
    }

    tad->vetor[tad->qtd] = num;
    tad->qtd++;
    printf("Elemento << %d >> inserido na posição %d!\n", num, tad->qtd-1);
}

void remover(TAD* tad)
{
    if (tad == NULL)
    {
        printf("Não foi possível remover!\n");
        return;
    }
    tad->qtd--;
    printf("Elemento Removido!\n");
}

int quantidade(TAD* tad)
{
    if (tad == NULL)
    {
        printf("Não foi possível buscar a quantidade!\n");
        return 0;
    }
    return tad->qtd;
}

void buscar(TAD* tad, int valor)
{
    if (tad == NULL)
    {
        printf("Não foi possível buscar o valor!\n");
        return;
    }
    for (int i = 0; i < tad->qtd; i++)
    {
        if (tad->vetor[i] == valor)
        {
            printf("Elemento %d achado na posição %d\n", valor, i);
        }
    }
}

void removerPrimeiro(TAD* tad)
{
    if (tad == NULL)
    {
        printf("Não foi possível remover!\n");
        return;
    }

    for (int i = 0; i < tad->qtd; i++)
    {
        if (i+1 <= tad->qtd)
        {
            tad->vetor[i] = tad->vetor[i+1];
        }  
    }
    tad->qtd--;
    printf("Elemento removido com sucesso!\n");
}

void removerIndice(TAD* tad, int pos)
{
    if (tad == NULL)
    {
        printf("Não foi possível remover!\n");
        return;
    }

    for (int i = pos; i < tad->qtd; i++)
    {
        if (i+1 <= tad->qtd)
        {
            tad->vetor[i] = tad->vetor[i+1];
        } 
    }
    tad->qtd--; 
    printf("Elemento removido com sucesso!\n");
}

void removerValor(TAD* tad, int valor)
{
    for (int i = 0; i < tad->qtd; i++)
    {
        if 
    }
}