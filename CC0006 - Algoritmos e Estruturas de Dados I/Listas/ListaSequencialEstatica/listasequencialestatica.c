#include <stdio.h>
#include <stdlib.h>
#include "listasequencialestatica.h"

struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

Lista* criar()
{
    Lista *lse;
    lse = (Lista*)malloc(sizeof(Lista));

    if (lse != NULL)
    {
        printf("Lista criada com sucesso!\n");
        lse->qtd=0;
    }
    return lse;
}

void imprimir(Lista* lse)
{   
    if (lse == NULL) 
    {
        printf("Não foi possível Imprimir!\n");
        return;
    }

    for (int i = 0; i < lse->qtd; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Matricula: %d\n", lse->dados[i].matricula);
        printf("Nome: %s\n", lse->dados[i].nome);
        printf("Av1: %.1f\n", lse->dados[i].av1);
        printf("Av2: %.1f\n", lse->dados[i].av2);
        printf("Pr: %.1f\n", lse->dados[i].pr);
        printf("-=-=-=-=-=-=-=-=-=-=-\n\n");
    }
}

void destruir(Lista* lse)
{
    if (lse == NULL) 
    {
        printf("Não foi possível destruir!\n");
        return;
    }
    printf("Lista destruida com sucesso!\n");
    free(lse);
}

int tamanho(Lista* lse)
{
    if (lse == NULL)
    {
        printf("Lista Nula\n");
        return 0;
    }

    printf("O tamanho da lista é %d\n", lse->qtd);
    return lse->qtd;
}

int cheia(Lista* lse)
{
    if (lse == NULL)
    {
        printf("Lista Nula\n");
        return -1;
    }

    else if (lse->qtd == MAX)
    {
        printf("Lista cheia!\n");
        return 1;
    }

    else
    {
        printf("A lista NÃO está cheia!\n");
        return 0;
    }
}

int vazia(Lista* lse)
{
    if (lse == NULL)
    {
        printf("Lista Nula\n");
        return -1;
    }
    else if (lse->qtd == 0)
    {
        printf("Lista vazia!\n");
        return 1;
    }
    else
    {
        printf("A lista NÃO está vazia!\n");
        return 0;
    }
}

void inserirFim(Lista* lse, struct aluno novosdados)
{
    if (lse == NULL) 
    {
        printf("Não foi possível adicionar!\n");
        return;
    }

    printf("Aluno de matricula: <%d> adicionado\n", novosdados.matricula);
    lse->dados[lse->qtd] = novosdados;
    lse->qtd++;
}
