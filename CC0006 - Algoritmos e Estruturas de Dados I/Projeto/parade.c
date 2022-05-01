#include <stdio.h>
#include <stdlib.h>
#include "parade.h"

struct elemento
{
    struct carta car;
    struct elemento *proximo;
};

typedef struct elemento Elemento;

// -=- Funçoes para a criaçao e manipulaçao de LISTAS -=-

Lista *Li_criar()
{
    Lista* li;
    li = (Lista*)malloc(sizeof(Lista));

    if (li == NULL)
    {
        printf("Não foi possivel criar a lista!\n");
        return li;
    }
    printf("Lista criada!\n");
    *li = NULL;
    return li;
}

int Li_inserirInicio(Lista *li, struct carta novaCarta)
{
    if (li == NULL)
    {
        printf("Não foi possível acessar a lista\n");
        return 1;
    }

    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));

    if (novo == NULL)
    {
        printf("Não foi possível inserir o elemento\n");
        return 2;
    }

    novo->proximo = *li;
    *li = novo;
    novo->car = novaCarta;

    printf("Carta <%d %c> adicionada na lista!\n", novaCarta.numero, novaCarta.naipe);
    return 0;
}

void Li_imprimir(Lista * li)
{
    if (li == NULL)
    {
        printf("Não foi possível acessar a lista\n");
        return;
    }

    Elemento *aux;
    aux = *li;

    printf("(LISTA) -> ");
    while (aux != NULL)
    {
        printf("[%d %c] ", aux->car.numero, aux->car.naipe);
        if (aux->proximo != NULL) printf("-> ");
        aux = aux->proximo;
    }

    printf("|\n");   
}

int Li_removerQualquer(Lista * li, struct carta carta)
{
    if (li == NULL)
    {
        printf("Não foi possível acessar a lista\n");
        return 1;
    }

    Elemento *aux, *anterior;
    aux = (Elemento*)malloc(sizeof(Elemento));
    anterior = (Elemento*)malloc(sizeof(Elemento));

    if (aux == NULL || anterior == NULL)
    {
        printf("Não foi possível imprimir\n");
        return 2;
    }

    aux = *li;
    anterior = NULL;

    while (aux != NULL)
    {
        if (aux->car.naipe == carta.naipe && aux->car.numero == carta.numero)
        {
            anterior->proximo = aux->proximo;
        }

        anterior = aux;
        aux = aux->proximo;
    }
    printf("Carta <%d%c> removida com sucesso!\n", carta.numero, carta.naipe);
    return 0;
}

int Li_acessarIndice(Lista * li, int indice)
{
    if (li == NULL)
    {
        printf("Não foi possível acessar a lista\n");
        return 1;
    }

    Elemento *aux;
    aux = (Elemento*)malloc(sizeof(Elemento));

    if (aux == NULL)
    {
        printf("Não foi possível imprimir\n");
        return 2;
    }

    aux = *li;

    int cont = 0;

    while (aux != NULL)
    {
        if (cont == indice)
        {
            printf("Carta do índice <%d> é: <%d%c>\n", cont, aux->car.numero, aux->car.naipe);
            return 0;
        }

        cont++;
        aux = aux->proximo;
    }

    printf("Carta não encontrada!\n");
    return 3;
}

int Li_quantidade(Lista * li)
{
    if (li == NULL)
    {
        printf("Não foi possível acessar a lista\n");
        return -1;
    }

    Elemento *aux;
    aux = *li;

    int cont = 0;
    while (aux != NULL)
    {
        cont++;
        aux = aux->proximo;
    }

    printf("Quantidade: %d\n", cont);
    return cont;
}

int Li_somaValores(Lista *li)
{
    if (li == NULL)
    {
        printf("Não foi possível acessar a lista\n");
        return -1;
    }

    Elemento *aux;
    aux = *li;

    int soma = 0;
    while (aux != NULL)
    {
        soma += aux->car.numero;
        aux = aux->proximo;
    }
    printf("Soma: %d\n", soma);
    return soma;
} 

// -=- Funçoes para a criaçao e manipulaçao de PILHAS -=-

Pilha *Pi_criar()
{
    Pilha* pi;
    pi = (Pilha*)malloc(sizeof(Pilha));

    if (pi == NULL)
    {
        printf("Não foi possivel criar a pilha!\n");
        return pi;
    }
    printf("Pilha criada!\n");
    *pi = NULL;
    return pi;
}

int Pi_inserir(Pilha *pi, struct carta novaCarta)
{
    if (pi == NULL)
    {
        printf("Não foi possivel acessar a pilha!\n");
        return 1;
    }

    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));

    if (novo == NULL)
    {
        printf("Não foi possivel inserir o elemento!\n");
        return 2;
    }

    novo->proximo = *pi;
    *pi = novo;
    novo->car = novaCarta;
    printf("Carta <%d %c> adicionada na pilha!\n", novaCarta.numero, novaCarta.naipe);
    return 0;
}

struct carta Pi_remover(Pilha *pi)
{
    struct carta novo;
    if (pi == NULL || *pi == NULL)
    {
        printf("Não foi possível remover da pilha!\n");
        return novo;
    }

    Elemento *aux = *pi;
    novo = (*pi)->car;
    *pi = (*pi)->proximo;
    free(aux);
    
    printf("Carta removida: [%d %c]\n", novo.numero, novo.naipe);
    return novo;
}

void Pi_embaralhar(Pilha *pi)
{
    if (pi == NULL)
    {
        printf("Não foi possível acessar a pilha\n");
        return;
    }
}

int Pi_tamanho(Pilha *pi)
{
    if (pi == NULL)
    {
        printf("Não foi possível acessar a pilha\n");
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

    printf("Quantidade: %d\n", cont);
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

    printf("(PILHA) -> ");
    while (aux != NULL)
    {
        printf("[%d %c] ", aux->car.numero, aux->car.naipe);
        if (aux->proximo != NULL) printf("-> ");
        aux = aux->proximo;
    }

    printf("|\n");   
}