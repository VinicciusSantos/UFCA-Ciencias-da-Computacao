#include <stdio.h>
#include <stdlib.h>
#include "parade.h"

struct elemento
{
    struct carta car;
    struct elemento *proximo;
};

typedef struct elemento Elemento;

Lista *criar()
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

int inserirInicio(Lista *li, struct carta novaCarta)
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

    printf("Carta <%d%c> adicionada com sucesso!\n", novaCarta.valor, novaCarta.cor);
    return 0;
}

void imprimir(Lista * li)
{
    if (li == NULL)
    {
        printf("Não foi possível acessar a lista\n");
        return;
    }

    Elemento *aux;
    aux = (Elemento*)malloc(sizeof(Elemento));

    if (aux == NULL)
    {
        printf("Não foi possível imprimir\n");
        return;
    }

    aux = *li;

    while (aux != NULL)
    {
        printf("%d%c -> ", aux->car.valor, aux->car.cor);
        aux = aux->proximo;
    }

    printf("||\n");   
}

int removerQualquer(Lista * li, struct carta carta)
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
        if (aux->car.cor == carta.cor && aux->car.valor == carta.valor)
        {
            anterior->proximo = aux->proximo;
        }

        anterior = aux;
        aux = aux->proximo;
    }
    printf("Carta <%d%c> removida com sucesso!\n", carta.valor, carta.cor);
    return 0;
}

int acessarIndice(Lista * li, int indice)
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
            printf("Carta do índice <%d> é: <%d%c>\n", cont, aux->car.valor, aux->car.cor);
            return 0;
        }

        cont++;
        aux = aux->proximo;
    }

    printf("Carta não encontrada!\n");
    return 3;
}

int quantidade(Lista *)