#include <stdio.h>
#include <stdlib.h>
#include "carta.h"
#include "lista.h"
#include "cores.h"
#include <time.h>

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
        // printf("Não foi possivel criar a lista!\n");
        return li;
    }
    // printf("Lista criada!\n");
    *li = NULL;
    return li;
}

int Li_inserirInicio(Lista *li, struct carta novaCarta)
{
    if (li == NULL)
    {
        // printf("Não foi possível acessar a lista\n");
        return 1;
    }

    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));

    if (novo == NULL)
    {
        // printf("Não foi possível inserir o elemento\n");
        return 2;
    }

    novo->proximo = *li;
    *li = novo;
    novo->car = novaCarta;

    // printf("Carta <%d %c> adicionada na lista!\n", novaCarta.numero, novaCarta.naipe);
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

    while (aux != NULL)
    {
        printf("\033[3%dm[%d %c]%s ", (aux->car.naipe-'a')+1, aux->car.numero, aux->car.naipe, C_GRAY);
        if (aux->proximo != NULL) printf("-> ");
        aux = aux->proximo;
    }
    printf("| ");   
}

int Li_removerQualquer(Lista * li, struct carta carta)
{
    if (li == NULL)
    {
        // printf("Não foi possível acessar a lista\n");
        return 1;
    }

    if (((*li)->car.numero == carta.numero) && ((*li)->car.naipe == carta.naipe))
    {
        *li = (*li)->proximo;
        return 0;
    }

    Elemento *aux, *anterior;
    aux = (Elemento*)malloc(sizeof(Elemento));
    anterior = (Elemento*)malloc(sizeof(Elemento));

    if (aux == NULL || anterior == NULL)
    {
        // printf("Não foi possível imprimir\n");
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
    //printf("Carta <%d %c> removida com sucesso!\n", carta.numero, carta.naipe);
    return 0;
}

struct carta Li_acessarIndice(Lista * li, int indice)
{
    struct carta c;
    if (li == NULL)
    {
        // printf("Não foi possível acessar a lista\n");
        return c;
    }

    if (indice == 0)
    {
        return (*li)->car;
    }

    Elemento *aux;
    aux = *li;

    int cont = 0;
    while (aux != NULL)
    {
        if (cont == indice)
        {
            // printf("Carta do índice <%d> é: <%d%c>\n", cont, aux->car.numero, aux->car.naipe);
            c = aux->car;
            return c;
        }
        cont++;
        aux = aux->proximo;
    }

    // printf("Carta não encontrada!\n");
    return c;
}

int Li_quantidade(Lista * li)
{
    if (li == NULL)
    {
        // printf("Não foi possível acessar a lista\n");
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

    // printf("Quantidade: %d\n", cont);
    return cont;
}

int Li_somaValores(Lista *li)
{
    if (li == NULL)
    {
        // printf("Não foi possível acessar a lista\n");
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
