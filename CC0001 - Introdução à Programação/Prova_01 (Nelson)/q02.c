#include <stdio.h>

/* Faça um algoritmo que receba dois valores inteiros: n e p . Após isso, calcule e imprima o arranjo dado por:
A n,p = n!/(n − p)!
*/

int main(){
    int n, p, fatn, fatnp, sub;
    float res;
    printf("Digite o valor de n: ");
    scanf("%i", &n);
    printf("Digite o valor de p: ");
    scanf("%i", &p);
    sub = n-p;

    // Calculando o fatorial de n:
    for(fatn = 1; n > 1; n--)
        fatn *= n;

    // Calculando o fatorial de n-p:
    for(fatnp = 1; sub > 1; sub--)
        fatnp *= sub;
    
    res = fatn / fatnp;
    printf("O resultado do arranjo é: %.2f \n", res);
    
    return 0;   
}