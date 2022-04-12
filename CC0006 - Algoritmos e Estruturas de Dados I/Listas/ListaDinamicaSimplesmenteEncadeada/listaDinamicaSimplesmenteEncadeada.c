#include <stdio.h>
#include <stdlib.h>
#include "listaDinamicaSimplesmenteEncadeada.h"

struct elemento
{
    struct aluno dados;
    struct elemento *proximo;
};

typedef struct elemento Elemento;

Lista* criar()
{
    Lista *ldse;
    ldse = (Lista*)malloc(sizeof(Lista));

    if (ldse != NULL)
    {
        *ldse = NULL;
        printf("Lista criada!\n");
    }
    return ldse;
}

void destruir(Lista* ldse)
{
    if (ldse == NULL)
    {
        printf("Não foi possível destruir!\n");
        return;
    }

    free(ldse);
}

void imprimir(Lista* ldse)
{
    if (ldse == NULL)
    {
        printf("Não foi possível imprimir!\n");
        return;
    }

    Elemento *aux;
    aux = *ldse;
    
    while (aux != NULL)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Matricula: \t%d\n", aux->dados.matricula);
        printf("Nome: \t\t%s\n", aux->dados.nome);
        printf("Av1: \t\t%.1f\n", aux->dados.av1);
        printf("Av2: \t\t%.1f\n", aux->dados.av2);
        printf("Pr: \t\t%.1f\n", aux->dados.pr);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
        aux = aux->proximo;
    }
}

int inserirInicio(Lista* ldse, struct aluno novosdados)
{
    if (ldse == NULL)
    {
        printf("Não foi possível adicionar!\n");
        return 0;
    }

    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->proximo = *ldse;
    novo->dados = novosdados;
    *ldse = novo;
    printf("Aluno <%s> adicionado ao inicio!\n", novosdados.nome);
}