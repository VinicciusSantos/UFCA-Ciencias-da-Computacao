#include <stdlib.h>
#include <stdio.h>

// Faça um programa que receba 3 números e imprima o maior número digitado.

int main(){
    int n1, n2, n3, maior;
    printf("Digite o primeiro número: ");
    scanf("%i", &n1);
    printf("Digite o segundo número: ");
    scanf("%i", &n2);
    printf("Digite o terceiro número: ");
    scanf("%i", &n3);

    if (n1 >= n2){
        maior = n1;
    } else {
        maior = n2;
        if (n3 >= n2){
            maior = n3;
        }
    }
    
    printf("O maior número é: %i \n", maior);

    return 0;
}