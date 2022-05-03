#include <stdio.h>
#include <stdlib.h>
#include "parade.h"
#include <time.h>

# define QUANT_NAIPES 6
# define QUANT_CARTAS 5
# define CARTASPORNAIPE 11
# define QUANT_MAO 5
# define QUANT_MESA 5

// cd Documentos/GitHub/UFCA-Ciencias-da-Computacao/CC0006\ -\ Algoritmos\ e\ Estruturas\ de\ Dados\ I/Projeto/
// gcc -c main.c parade.c && gcc -o main main.o parade.o && ./main

int main(void)
{
    // Criando as 66 cartas:
    Pilha *baralho = Pi_criar();
    for (int j = 0; j < QUANT_NAIPES; j++)
    {
        for (int i = 0; i < CARTASPORNAIPE; i++)
        {
            struct carta a = {i, 'a'+j};
            Pi_inserir(baralho, a);
        }
    }
    Pi_embaralhar(baralho);

    // Pegando as 5 cartas da mesa:
    Lista *mesa = Li_criar();
    for (int i = 0; i < QUANT_MESA; i++)
    {
        Li_inserirInicio(mesa, Pi_remover(baralho));
    }

    // Pegando as 5 cartas da mão:
    Lista *mao = Li_criar();
    for (int i = 0; i < QUANT_MAO; i++)
    {
        Li_inserirInicio(mao, Pi_remover(baralho));
    }

    Lista **colecaoJogador;
    colecaoJogador = (Lista**)malloc(sizeof(Lista*)*QUANT_NAIPES);
    for (int i = 0; i < QUANT_NAIPES; i++)
        colecaoJogador[i] = Li_criar();
    
    Lista *colecaoComputador;

    // Iniciando o jogo:
    while (1)
    {
        system("clear");

        // Imprimindo as cartas da mesa:
        printf("[NOVA CARTA] -> ");
        Li_imprimir(mesa);
        printf("Baralho (%d cartas)\n", Pi_tamanho(baralho));

        // Imprimindo a coleção:
        printf("\nColeção:");
        printf("\nA -> ");
        printf("\nB -> ");
        printf("\nC -> ");
        printf("\nD -> ");
        printf("\nE -> ");

        // Imprimindo a mão:
        printf("\n\nMÃO: ");
        Li_imprimir(mao);
        printf("\n      ");
        for (int i = 0; i < QUANT_MAO; i++)
        {
            printf("(%d)       ", i+1);
        }
        
        // Recebendo a carta:
        int escolha;
        printf("\n\nEscolha qual carta da sua mão será a NOVA CARTA...\n");
        printf("-> ");
        scanf("%d", &escolha);
        while(getchar() != '\n');
    }
    return 0;
}