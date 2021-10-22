#include <stdlib.h>
#include <stdio.h>

// Faça um algorítimo que receba dois números digitados pelo usuário e imprima a multiplicação
// entre eles

int main(){
    int num1, num2, res;
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
    res = num1 * num2;
    printf("A multiplicação entre %i e %i é: %i", num1, num1, res);
    return 0;
}