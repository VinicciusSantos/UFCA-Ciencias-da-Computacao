#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

struct tad
{
    int qtd;
    int max;
    int *vetor;
};

TAD *criar(int tam)
{
    if (tam < 1)
    {
        printf("Nao foi possível criar o tad! \n");
        return NULL;
    }

    TAD *novo;
    novo = (TAD*)malloc(sizeof(TAD));

    if (novo != NULL)
    {
        novo->qtd = 0;
        novo->max = tam;
        novo->vetor = (int*)malloc(sizeof(int)*tam);

        if (novo->vetor == NULL)
        {
            printf("Não foi possível criar o tad! \n");
            return NULL;
        }
        printf("TAD criado com sucesso!\n");
    }
    return novo;
}

void destruir(TAD* tad)
{
    if (tad != NULL)
    {
        free(tad->vetor);
        free(tad);
        printf("TAD destruido!\n");
        return;
    }
    printf("Nao foi possivel destruir o TAD\n");
}

void imprimir(TAD* tad)
{
    if (tad != NULL)
    {
        printf("Imprimindo os elementos: ");
        for (int i=0; i < tad->qtd; i++)
        {
            printf("%d ", tad->vetor[i]);
        }
        printf("\n");
        return;
    }
    printf("Nao foi possivel imprimir os elementos\n");
}

int quantidade(TAD* tad)
{
    if (tad != NULL)
    {
        return tad->qtd;
    }
    return -1;
}

void buscar(TAD* tad, int valor)
{
    if (tad != NULL)
    {
        for (int i=0; i < tad->qtd; i++)
        {
            if (tad->vetor[i] == valor)
            {
                printf("O elemento (%d) aparece no indice << %d >>\n", valor, i);
                return;
            }
        }
        printf("O valor << %d >> nao foi encontrado!", valor);
        return;
    }
    printf("Nao foi possivel buscar o valor\n");
}

void removerInicio(TAD* tad)
{
    if (tad != NULL)
    {
        for (int i=0; i < tad->qtd-1; i++)
        {
            tad->vetor[i] = tad->vetor[i+1];
        }
        tad->qtd--;
        printf("Primeiro valor removido com sucesso!\n");
        return;
    }
    printf("Nao foi possivel buscar o valor\n");
}

void removerUltimo(TAD* tad)
{
    if (tad != NULL)
    {
        tad->qtd--;
        printf("Ultimo elemento removido!\n");
        return;
    }
    printf("Nao foi possivel remover o valor\n");
}

void removerIndice(TAD* tad, int indice)
{
    if (tad != NULL && indice < tad->qtd-1)
    {
        printf("Elemento %d no indice %d removido com sucesso!\n", tad->vetor[indice], indice);
        for (int i=indice; i<tad->qtd-1; i++)
        {
           tad->vetor[i] = tad->vetor[i+1];
        }
        tad->qtd--;
        return;
    }
    printf("Nao foi possivel remover o valor\n");
}

void removerValor(TAD* tad, int valor)
{
    if (tad != NULL)
    {
        for (int i=0; i < tad->qtd; i++)
        {
            if (tad->vetor[i] == valor)
            {
                printf("Elemento %d no indice %d removido com sucesso!\n", tad->vetor[i], i);
                for (int J=i; J<tad->qtd-1; J++)
                {
                    tad->vetor[J] = tad->vetor[J+1];
                }
                tad->qtd--;
                return;
            }
        }
        printf("O valor << %d >> nao foi encontrado!", valor);
        return;
    }
    printf("Nao foi possivel remover o valor!\n");
}

void inserirInicio(TAD* tad, int valor)
{
    if (tad != NULL && tad->qtd < tad->max)
    {
        for (int i=tad->qtd; i>0; i--)
        {
            tad->vetor[i] = tad->vetor[i-1];
        }
        tad->vetor[0] = valor;
        tad->qtd++;
        printf("O elemento << %d >> foi inserido no indice [0]\n", valor);
        return;
    }
    printf("Nao foi possivel inserir o valor!\n");
}

void inserirOrdenado(TAD* tad, int valor)
{
    if (tad != NULL && tad->qtd < tad->max)
    {
        for (int i=0; i<tad->qtd; i++)
        {
            if (valor > tad->vetor[i] && valor < tad->vetor[i+1])
            {
                for (int j = tad->qtd; j > i; j--)
                {
                    tad->vetor[j] = tad->vetor[j-1];
                }
                tad->vetor[i] = valor;
                tad->qtd++;
                printf("Elemento %d inserido na posicao [%d]\n", valor, i);
                return;
            }
        }    
    }
    printf("Nao foi possivel inserir o valor!\n");
}

void inserirIndice(TAD* tad, int valor, int indice)
{
    if (tad != NULL && tad->qtd < tad->max && indice >= 0)
    {
        for (int i=0; i<tad->qtd; i++)
        {
            if (i == indice)
            {
                for (int j = tad->qtd; j > i; j--)
                {
                    tad->vetor[j] = tad->vetor[j-1];
                }
                tad->vetor[i] = valor;
                tad->qtd++;
                printf("Elemento %d inserido na posicao [%d]\n", valor, i);
                return;
            }
        }    
    }
        printf("Nao foi possivel inserir o valor!\n");   
}

void inserirUltimo(TAD* tad, int valor)
{
    if (tad != NULL && tad->qtd < tad->max)
    {
        tad->vetor[tad->qtd] = valor;
        printf("O elemento << %d >> foi inserido no indice [%d]\n", valor, tad->qtd);
        tad->qtd++;
        return;    
    }
    printf("Nao foi possivel inserir o valor!\n");
}

TAD *inverter(TAD* tad)
{
    if (tad != NULL)
    {
        TAD *invertido;
        invertido = criar(tad->max);
        invertido->qtd = tad->qtd;

        for (int i = 0; i <= tad->qtd; i++)
        {
            invertido->vetor[i] = tad->vetor[tad->qtd-i-1];
        }
        return invertido;
    }
}

TAD *concaternar(TAD* tad1, TAD* tad2)
{
    if (tad1 != NULL && tad1 != NULL)
    {
        TAD *tad3 = criar(tad1->max+tad2->max);
        tad3->qtd = tad1->qtd + tad2->qtd;

        for (int i=0; i<tad1->qtd; i++)
        {
            tad3->vetor[i] = tad1->vetor[i];
        }

        for (int i=tad1->qtd; i<tad3->qtd; i++)
        {
            tad3->vetor[i] = tad2->vetor[i-tad1->qtd];
        }
        return tad3;
    }
}
