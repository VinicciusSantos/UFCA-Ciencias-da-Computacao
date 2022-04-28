#include <stdio.h>
#include <stdlib.h>
#include "ldde.h"

struct elemento
{
    struct elemento *ant;
    int valor;
    struct elemento *prox;
};

typedef struct elemento Elemento;

Lista * criar()
{
    Lista* l;
    l = (Lista*)malloc(sizeof(Lista));

    if (l == NULL)
    {
        printf("Não foi possível criar a lista\n");
        return l;
    }
    *l = NULL;
    printf("Lista criada com sucesso!\n");
    return l;
}

void inserirOrdenado(Lista* li, int novo_valor)
{
    if (li == NULL)
    {
        printf("Não foi possível criar a lista\n");
        return;
    }

    Elemento *novo = (Elemento*)malloc(sizeof(Elemento));

    if (novo == NULL)
    {
        printf("ERRO! não foi possível inserir o elemento\n");
        return;
    }

    novo->valor = novo_valor;
    if (*li == NULL || (*li)->valor > novo_valor)
    {
        novo->ant = NULL;
        novo->prox = *li;

        if (*li != NULL)
        {
            (*li)->ant = novo;
        }
        *li = novo;
        printf("Valor <%d> adicionado!\n", novo_valor);
        return;
    }

    else
    {
        Elemento *ant, *aux;
        ant = *li;
        aux = ant->prox;

        while (aux != NULL && aux->valor < novo_valor)
        {
            ant = aux;
            aux = aux->prox;
        }

        ant->prox = novo;
        if (aux != NULL)
        {
            aux->ant = novo;
        }

        novo->ant = ant;
        novo->prox = aux;
        printf("Valor <%d> adicionado!\n", novo_valor);
        return;
        
    }
}

void removerValor(Lista* li, int valor)
{
    if (li == NULL)
    {
        printf("Não foi possível acessar a lista!\n");
        return;
    }

    if ((*li)->valor == valor) // Se estiver no começo
    {
        ((*li)->prox)->ant = (*li)->ant;
        *li = (*li)->prox;
    }

    Elemento *aux, *ant;
    aux = *li;
    ant = NULL;

    while (aux != NULL)
    {
        if (aux->valor == valor)
        {
            if (aux->prox != NULL)
            {
                (aux->prox)->ant = aux->ant;
            }
            ant->prox = aux->prox;
        }
        ant = aux;
        aux = aux->prox;
    }
    
}

void imprimir(Lista* li)
{
    if (li == NULL)
    {
        printf("Não foi possível acessar a lista\n");
        return;
    }

    Elemento *aux;
    aux = *li;

    while (aux != NULL)
    {
        printf("%d -> ", aux->valor);
        aux = aux->prox;
    }

    printf("||\n");
    return;
}
