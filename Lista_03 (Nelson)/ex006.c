#include <stdlib.h>
#include <stdio.h>

// Faça um programa que receba um número inteiro entre 1 e 9 e imprima a mensagem que está
// relacionada com o número digitado de acordo com a tabela. Caso o número não esteja entre
// 1 e 9, imprima "Número Inválido!".

int main(){
    int n1, continuar;
    continuar = 1;
    while (continuar==1)
    {
        printf("Digite um número entre 1 e 9: ");
        scanf("%i", &n1);

        switch (n1)
        {
        case 1:
            printf("O código %i significa: Lave as mãos \n", n1);
            break;
        case 2:
            printf("O código %i significa: Passe Álcool em gel \n", n1);
            break;
        case 3:
            printf("O código %i significa: Use Máscara \n", n1);
            break;
        case 4:
            printf("O código %i significa: Cuide dos Idosos \n", n1);
            break;
        case 5:
            printf("O código %i significa: Cultive Paciência \n", n1);
            break;
        case 6:
            printf("O código %i significa: Cultive sabedoria \n", n1);
            break;
        case 7:
            printf("O código %i significa: Ame o Próximo \n", n1);
            break;
        case 8:
            printf("O código %i significa: Exercite a disciplina \n", n1);
            break;
        case 9:
            printf("O código %i significa: Acalme a mente \n", n1);
            break;
        default:
        printf("Código Inválido! \n");
            break;
        }
        printf("Deseja continuar? [0-1]: ");
        scanf("%i", &continuar);
        }
    return 0;
}
