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

    // Se a arvore estiver vazia, insere no começo
    if (*arv == NULL)
    {
        *arv = novo;
        //printf("Elemento (raiz) inserido no começo!\n");
        return;
    }

    No *aux = *arv;
    No *ant;
    while (aux != NULL)
    {
        ant = aux;
        if (novo->valor <= aux->valor) aux = aux->prox1;
        else aux = aux->prox2;
    }
    
    if (ant->prox1 == NULL) ant->prox1 = novo;
    else ant->prox2 = novo;
    //printf("Elemento inserido!\n");
}

void ImprimirProximos(No* no, int quant_tabs)
{
    if (no->prox1 != NULL) 
    {
        for (int i = 0; i < quant_tabs; i++) printf("\t");
        printf("%d\n", no->prox1->valor);
        ImprimirProximos(no->prox1, quant_tabs+1);
    }

    if (no->prox2 != NULL) 
    {
        for (int i = 0; i < quant_tabs; i++) printf("\t");
        printf("%d\n", no->prox2->valor);
        ImprimirProximos(no->prox2, quant_tabs+1);
    }
}

void Imprimir(Arvore* arv)
{
    if (arv == NULL || *arv == NULL)
    {
        printf("Arvore não encontrada!\n");
        return;
    }

    printf("-=-=-=- IMPRIMINDO ÁRVORE -=-=-=-\n");
    // Imprindo a raiz
    No *aux = (*arv);
    printf("%d\n", aux->valor);

    ImprimirProximos(aux, 1);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}

// Função auxiliar da Destruir()
void LiberarNo(No* no)
{
    if (no != NULL)
    {
        LiberarNo(no->prox1);
        LiberarNo(no->prox2);
        free(no);
        //no = NULL;
    }
}

void Destruir(Arvore* arv)
{
    if (arv != NULL)
    {
        LiberarNo(*arv);
        *arv = NULL;
        // free(arv);
        printf("Árvore destruida!\n");
    }
}
