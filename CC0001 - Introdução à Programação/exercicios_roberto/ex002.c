#include <stdio.h>

// Escreva um programa que receba um número inteiro. Valide esse número de modo que ee fique entre 0 e 10.

int main(){
    int num;
    do
    {
        printf("digite um número entre 0 e 10: ");
        scanf("%d", &num);
    } while (num < 0 || num > 10);
    printf("O número digitado foi: %d\n", num);
    return 0;
}