#include <stdlib.h>
#include <stdio.h>

// Faça um algorítmo que receba um número x digitado pelo usuário. O programa deve imprimir se
// o x é impar ou par.

int main(){
    int x;
    printf("Digite um número: ");
    scanf("%i", &x);
    printf("Você digitou o número: %i \n", x);
    if (x % 2 == 0){
        printf("%i é PAR! \n", x);
    } else {
        printf("%i é IMPAR! \n", x);
    }
    return 0;
}