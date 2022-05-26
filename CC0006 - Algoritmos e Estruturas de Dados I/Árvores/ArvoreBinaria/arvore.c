#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct no
{
    struct no *prox1;
    struct no *prox2;
    int valor;
};

typedef struct no No;

Arvore *Criar()
{
    Arvore *novo = (Arvore*)malloc(sizeof(Arvore));
    if (novo == NULL)
    {
        printf("Deu merda!\n");
        return novo;
    }
    printf("Arvore Criada!\n");
    *novo = NULL;
    return novo;
}

void InserirNo(Arvore* arv, int valor)
{
    No *novo = (No*)malloc(sizeof(No));
    if (novo == NULL)
    {
        printf("Deu merda!\n");
        return;
    }

    novo->prox1 = NULL;
    novo->prox2 = NULL;
    novo->valor = valor;

    if (*arv == NULL)
    {
        *arv = novo;
        printf("Elemento (raiz) inserido no começo!\n");
        return;
    }

    No *aux = *arv;
    No *ant;
    while (aux != NULL)
    {
        ant = aux;
        if (novo->valor <= aux->valor) aux = aux->prox1;
        if (novo->valor > aux->valor) aux = aux->prox2;
    }
    
    ant->prox1 = novo;
    printf("Teoricamente inserido!\n");
}

void Imprimir(Arvore* arv)
{
    if (arv == NULL)
    {
        printf("Arvore não encontrada!\n");
        return;
    }

    printf("Raiz: \t%d\n", (*arv)->valor);
}