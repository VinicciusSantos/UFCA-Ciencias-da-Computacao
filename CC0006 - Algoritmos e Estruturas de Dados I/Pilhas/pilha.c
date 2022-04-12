#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct elemento
{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elemento;

Pilha* criar()
{
    Pilha *pi;
    pi = (Pilha*)malloc(sizeof(Pilha));

    if (pi != NULL)
    {
        printf("Pilha Criada!\n");
        *pi = NULL;
    }
    return pi;
}

void imprimir(Pilha* pi)
{
    if (pi == NULL)
    {
        printf("Não foi possível Imprimir\n");
        return;
    }

    Elemento *aux;
    aux = *pi;

    printf("\n");
    while (aux != NULL)
    {
        printf("%d -> ", aux->num);
        aux = aux->prox;
    }
    printf("||\n\n");
    
}

void inserir(Pilha* pi, int dado)
{
    if (pi == NULL)
    {
        printf("Não foi possivel adicionar!\n");
        return;
    }

    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));

    novo->num = dado;
    novo->prox = *pi;
    *pi = novo;
    printf("Elemento %d Adicionado!\n", dado);
}

void remover(Pilha* pi)
{
    if (pi == NULL)
    {
        printf("Não foi possivel remover!\n");
        return;
    }

    Elemento *aux;
    aux = *pi;

    if (aux == NULL)
    {
        printf("Não foi possivel remover!\n");
        return;
    }

    printf("Elemento %d removido!\n", aux->num);
    *pi = aux->prox;  
}

int acessar(Pilha* pi)
{
    if (pi == NULL)
    {
        printf("Não foi possivel Acessar!\n");
        return 0;
    }

    Elemento *aux;
    aux = *pi;

    printf("Elemento <%d> no topo!\n", aux->num);
    return aux->num;
}