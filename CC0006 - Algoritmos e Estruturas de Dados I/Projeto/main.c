#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "carta.h"
#include "lista.h"
#include "pilha.h"
#include "cores.h"

# define QUANT_NAIPES 6
# define QUANT_CARTAS 5
# define CARTASPORNAIPE 11
# define QUANT_MAO 5
# define QUANT_MESA 5

// cd Documentos/GitHub/UFCA-Ciencias-da-Computacao/CC0006\ -\ Algoritmos\ e\ Estruturas\ de\ Dados\ I/Projeto/ && gcc -c *.c && gcc -c main *.o && ./main

void imprimirColecao(Lista** colecao)
{
    for (int i = 0; i < QUANT_NAIPES; i++)
    {
        printf("\n\033[3%dm%c%s -> ", i+1, 'A'+i, C_GRAY);
        if (Li_quantidade(colecao[i]) == 0) printf("Vazio");
        else Li_imprimir(colecao[i]);
    }
}

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
    for (int i = 0; i < QUANT_MAO; i++) Li_inserirInicio(mao, Pi_remover(baralho));

    Lista **colecaoJogador;
    colecaoJogador = (Lista**)malloc(sizeof(Lista*)*QUANT_NAIPES);
    for (int i = 0; i < QUANT_NAIPES; i++)
        colecaoJogador[i] = Li_criar();
    
    Lista **colecaoComputador;
    colecaoComputador = (Lista**)malloc(sizeof(Lista*)*QUANT_NAIPES);
    for (int i = 0; i < QUANT_NAIPES; i++)
        colecaoComputador[i] = Li_criar();

    // Se for impar, vez do jogador, se for par, vez do pc
    int rodada = 0;
    // Se vencedor == 1: vitoria do jogador     se vencedor == 2: vitoria do computador
    int vencedor = 0; 
    // Iniciando o jogo:
    while (1)
    {
        system("clear");
        rodada++;
        printf("Rodada: %d\n\n", rodada);

        // Testando quantos naipes os jogadores tem:
        int quant_cheiosJog = 0, quant_cheiosPc = 0;
        for (int i = 0; i < QUANT_NAIPES; i++)
        {
            if (Li_quantidade(colecaoJogador[i]) > 0) quant_cheiosJog++;
            if (Li_quantidade(colecaoComputador[i]) > 0) quant_cheiosPc++;
        }

        // Testando os finais de jogo:
        if (quant_cheiosJog == QUANT_NAIPES || quant_cheiosPc == QUANT_NAIPES || (Pi_tamanho(baralho) == 0 && (Li_quantidade(mao) == 4 && rodada % 2 == 1)))
        {
            system("clear");
            printf("%s-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n", C_RED);
            printf("                      %sJogo Encerrado!\n", C_GRAY);
            printf("%s-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-%s\n", C_RED, C_GRAY);
            
            // Se o jogador já tiver carta de todas as cores na coleção:
            if (quant_cheiosJog == QUANT_NAIPES)
            {
                printf("Acabou pois o %sjogador%s tem cartas de todas as cores na colecao!\n", C_YELLOW, C_GRAY);
                vencedor = 2;
            }

            // Se o computador já tiver carta de todas as cores na coleção:
            if (quant_cheiosPc== QUANT_NAIPES)
            {
                printf("Acabou pois o %sjogador%s tem cartas de todas as cores na colecao!\n", C_YELLOW, C_GRAY);
                vencedor = 1;
            }

            // Quando o baralho acabar e o jogador estiver com 0 cartas:
            if (Pi_tamanho(baralho) == 0 && (Li_quantidade(mao) == 4 && rodada % 2 == 1))
            {
                printf("O Jogador tem < %d > cartas e o Baralho tem < %d > cartas!\n", Li_quantidade(mao), Pi_tamanho(baralho));
            }

            break;  // Encerrando o while do jogo
        }

        // Imprimindo as cartas da mesa:
        printf("%s%s[NOVA CARTA] %s%s-> ", C_BOLD,C_YELLOW, C_GRAY, C_NONE);
        Li_imprimir(mesa);
        printf("Baralho (%d cartas)\n", Pi_tamanho(baralho));

        // Imprimindo a coleção:
        printf("\n%sColeção Jogador:%s", C_CYAN, C_GRAY);
        imprimirColecao(colecaoJogador);
        printf("\n\n%sColeção Computador:%s", C_CYAN, C_GRAY);
        imprimirColecao(colecaoComputador);

        // Imprimindo a mão:
        printf("\n\nMÃO: ");
        Li_imprimir(mao);
        printf("\n      ");
        for (int i = 0; i < QUANT_MAO; i++) printf("(%d)      ", i+1);
        printf("\n");
        
        struct carta escolhida; 

        // Vez do Jogador
        if (rodada % 2 == 1)
        {
            // Recebendo a carta:
            int escolha;
            do
            {
                printf("\nEscolha qual carta da sua mão será a %s%s[NOVA CARTA]%s%s...\n", C_BOLD, C_YELLOW, C_GRAY, C_NONE);
                printf("%s>>>%s ", C_YELLOW, C_GRAY);
                scanf("%d", &escolha);
                while(getchar() != '\n');
            } while (escolha < 1 || escolha > QUANT_MAO);
            
            // Pegando a carta escolhida na mão:
            escolhida = Li_acessarIndice(mao, escolha-1);

            // Removendo da mão e colocando na mesa:
            Li_removerQualquer(mao, escolhida);
            
            printf("\n%s-=-=-=-=-=-=--=-=-=-=-%s CARTA %s-=-=-=-=-=-=--=-=-=-=-%s", C_RED, C_GRAY, C_RED, C_GRAY);
            printf("\n%sCarta escolhida: \033[3%dm[%d %c]%s\n", C_GRAY, (escolhida.naipe - 'a')+1, escolhida.numero, escolhida.naipe, C_GRAY);
        }

        // Vez do computador:
        else 
        {
            printf("\n%s-=-=-=-=-=-=--=-=-=-=-%s VEZ DO COMPUTADOR %s-=-=-=-=-=-=--=-=-=-=-%s", C_RED, C_GRAY, C_RED, C_GRAY);
            if (Pi_tamanho(baralho) != 0)
            {
                escolhida = Pi_remover(baralho); 
                printf("\n%sCarta escolhida: \033[3%dm[%d %c]%s\n", C_GRAY, (escolhida.naipe - 'a')+1, escolhida.numero, escolhida.naipe, C_GRAY);
            }
            else continue;
        }

        // Imprimindo as cartas protegidas:
        printf("%sProtegidas: ", C_GRAY);
        if (escolhida.numero == 0) printf("%sNenhuma%s", C_RED, C_GRAY);
        for (int i = 0; i < escolhida.numero; i++)
        {
            if (i > Li_quantidade(mesa)-1) break;
            struct carta c = Li_acessarIndice(mesa, i);
            printf("\033[3%dm[%d %c]%s ", (c.naipe-'a')+1, c.numero, c.naipe, C_GRAY);
        }
        printf("\n");

        // Imprimindo as cartas desprotegidas:
        printf("%sDesprotegidas: ", C_GRAY);
        if (escolhida.numero > Li_quantidade(mesa)) printf("%sNenhuma%s", C_RED, C_GRAY);
        for (int i = escolhida.numero; i < Li_quantidade(mesa); i++)
        {
            struct carta c = Li_acessarIndice(mesa, i);
            printf("\033[3%dm[%d %c]%s ", (c.naipe-'a')+1, c.numero, c.naipe, C_GRAY);
        }
        printf("\n\n");

        // Testando as condições nas cartas desprotegidas:
        Lista *removidos = Li_criar();
        for (int i = escolhida.numero; i < Li_quantidade(mesa); i++)
        {
            struct carta c = Li_acessarIndice(mesa, i);

            // Se a cor for igual ou o numero for maior:
            if (c.naipe == escolhida.naipe || c.numero <= escolhida.numero)
            {
                Li_inserirInicio(removidos, c);
                printf("A carta \033[3%dm[%d %c]%s foi para a coleção!\n", (c.naipe-'a')+1, c.numero, c.naipe, C_GRAY);
            }
        }

        if (Li_quantidade(removidos) == 0) printf("%sNenhuma carta foi para a coleção!%s\n", C_RED, C_GRAY);

        // removendo as cartas da mesa e inserindo nas coleções:
        while (Li_quantidade(removidos) > 0)
        {
            struct carta c = Li_acessarIndice(removidos, 0);

            if (rodada % 2 == 1) Pi_inserir(colecaoJogador[c.naipe-97], c);
            else Pi_inserir(colecaoComputador[c.naipe-97], c);

            Li_removerQualquer(mesa, c);
            Li_removerQualquer(removidos, c);
        }

        if (rodada % 2 == 1)
        {
            Pi_inserir(mesa, escolhida);

            // Nova carta que vai entrar na mao do jogador:
            if (Pi_tamanho(baralho) != 0)
            {
                struct carta nova = Pi_remover(baralho);
                Li_inserirInicio(mao, nova);
            }
            else
                printf("Ultima Rodada, jogador com 4 cartas\n");
        }
        while(getchar() != '\n');
    }   // Aqui se encerra o While do jogo

    switch (vencedor)
    {
        case 1: printf("Vitória do Jogador!\n"); break;
        case 2: printf("Vitória do Computador!\n"); break;
    }

    // Imprimindo a coleção:
    printf("\n%sColeção Jogador:", C_CYAN);
    imprimirColecao(colecaoJogador);
    printf("\n\n%sColeção Computador:", C_CYAN);
    imprimirColecao(colecaoComputador);

    while(getchar() != '\n');
    return 0;
}