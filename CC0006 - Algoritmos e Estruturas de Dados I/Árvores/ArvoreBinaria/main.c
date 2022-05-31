#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


int main(void)
{
    system("clear");
    Arvore *arv = Criar();
    //Imprimir(arv);
    
    for (int i = 0; i < 10; i++)
    {
        system("clear");
        printf("Digite um número: ");
        int escolha;
        scanf("%d", &escolha);

        while(getchar() != '\n');
        InserirNo(arv, escolha);
        Imprimir(arv);
        printf("\nPressione ENTER para continuar...\n");
        while(getchar() != '\n');
    }

    /*
    InserirNo(arv, 8);
    InserirNo(arv, 3);
    InserirNo(arv, 9);
    InserirNo(arv, 1);
    InserirNo(arv, 6);
    InserirNo(arv, 4);
    InserirNo(arv, 7);
    Imprimir(arv);
    Destruir(arv);
    Imprimir(arv);
    */
}