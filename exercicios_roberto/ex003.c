#include <stdio.h>

// Escreva um programa que receba um número inteiro positivo e calcule o fatorial desse número

int main(){
    int num;
    int fat = 1;
    do{
        printf("Digite um número para calcular o seu fatorial: ");
        scanf("%d", &num);
    } while (num < 0);

    printf("O fatorial de %d é: \n", num);
    for(int i=num; i>0; i--){
        printf("%d", i);
        if (i != 1)
            printf(" x ");
        else
            printf(" = ");
        fat *= i;
    }
    printf("%d\n", fat);
    return 0;
}