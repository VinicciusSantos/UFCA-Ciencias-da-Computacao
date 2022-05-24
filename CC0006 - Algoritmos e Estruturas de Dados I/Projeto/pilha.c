#include <stdio.h>
#include <stdlib.h>
#include "carta.h"
#include "pilha.h"
#include <time.h>

struct elemento
{
    struct carta car;
    struct elemento *proximo;
};

typedef struct elemento Elemento;

Pilha *Pi_criar()
{
    Pilha* pi;
    pi = (Pilha*)malloc(sizeof(Pilha));

    if (pi == NULL)
    {
        // printf("Não foi possivel criar a pilha!\n");
        return pi;
    }
    // printf("Pilha criada!\n");
    *pi = NULL;
    return pi;
}

int Pi_inserir(Pilha *pi, struct carta novaCarta)
{
    if (pi == NULL)
    {
        // printf("Não foi possivel acessar a pilha!\n");
        return 1;
    }

    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));

    if (novo == NULL)
    {
        // printf("Não foi possivel inserir o elemento!\n");
        return 2;
    }

    novo->proximo = *pi;
    *pi = novo;
    novo->car = novaCarta;
    // printf("Carta <%d %c> adicionada na pilha!\n", novaCarta.numero, novaCarta.naipe);
    return 0;
}

struct carta Pi_remover(Pilha *pi)
{
    struct carta novo;
    if (pi == NULL || *pi == NULL)
    {
        // printf("Não foi possível remover da pilha!\n");
        return novo;
    }

    Elemento *aux = *pi;
    novo = (*pi)->car;
    *pi = (*pi)->proximo;
    free(aux);
    
    // printf("Carta removida: [%d %c]\n", novo.numero, novo.naipe);
    return novo;
}

int Pi_tamanho(Pilha *pi)
{
    if (pi == NULL)
    {
        // printf("Não foi possível acessar a pilha\n");
        return -1;
    }

    Elemento *aux;
    aux = *pi;

    int cont = 0;
    while (aux != NULL)
    {
        cont++;
        aux = aux->proximo;
    }

    // printf("Quantidade: %d\n", cont);
    return cont;
}

void Pi_imprimir(Pilha *pi)
{
    if (pi == NULL)
    {
        printf("Não foi possível acessar a pilha!\n");
        return;
    }

    Elemento *aux;
    aux = *pi;

    while (aux != NULL)
    {
        printf("[%d %c] ", aux->car.numero, aux->car.naipe);
        if (aux->proximo != NULL) printf("-> ");
        aux = aux->proximo;
    }
    printf("| ");   
}

void Pi_InserirIndice(Pilha* pi, struct carta novaCarta, int indice)
{
    if (pi == NULL)
    {
        printf("Não foi possivel acessar a pilha!\n");
        return;
    }

    Elemento *novo, *aux, *anterior;
    novo = (Elemento*)malloc(sizeof(Elemento));
    aux = *pi;
    anterior = NULL;

    novo->car = novaCarta;

    if (indice == 0)
    {
        Pi_inserir(pi, novaCarta);
        return;
    }

    int cont = 0;
    while (aux != NULL)
    {
        if (cont == indice)
        {
            break;
        }
        anterior = aux;
        aux = aux->proximo;
        cont++;
    }

    if (indice > cont)
    {
        // printf("Inserido por ultimo!\n");
    }
    novo->proximo = anterior->proximo;
    anterior->proximo = novo;   
}

void Pi_embaralhar(Pilha *pi)
{
    if (pi == NULL)
    {
        printf("Não foi possível acessar a pilha\n");
        return;
    }

    time_t t;
    srand((unsigned) time(&t));
    for (int i = 0; i < 100; i++)
    {
        Pi_InserirIndice(pi, Pi_remover(pi), rand() % Pi_tamanho(pi));
    }
}















