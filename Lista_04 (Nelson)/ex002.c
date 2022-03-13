/*  Faça um algoritmo que receba um número n do usuário e calcule o valor da série S dos n primeiros termos da série:  
S = 1/1 - 2/4 + 3/9 - 4/16 + ... */

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float soma = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0) 
            soma -= (float) i / pow(i, 2);
        else 
            soma += (float) i / pow(i, 2);
    }
    
    printf("A soma é: %.2f\n", soma);
    return 0;
}