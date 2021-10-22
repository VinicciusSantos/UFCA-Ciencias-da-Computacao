#include <stdio.h>
#include <stdlib.h>

// Faça um algorítmo que receba dois números e informe se o primeiro é divisível pelo segundo.

int main(){
    int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%i", &n1);
    printf("Digite o segundo número: ");
    scanf("%i", &n2);
    
    if (n1 % n2 == 0){
        printf("%i / %i = %i \n", n1, n2, n1/n2);
        printf("O Número %i é divisível por %i \n", n1, n2);
    } else {
        printf("Esses números não resultam em uma divisão inteira! \n");
    }
    return 0;
}