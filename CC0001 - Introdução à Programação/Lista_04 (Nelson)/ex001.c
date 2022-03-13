// Faça   um   algoritmo   que   receba   um   número   digitado   pelo   usuário   e   imprima   todos   os   
// divisores   do   número.   

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Os divisores de %d são: \n", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) printf("%i -> ", i);
    }
    printf("Fim\n");
    return 0;
}