/*   Faça   um   algoritmo   que   recebe   dez   números   digitados   pelo   usuário.   Após   isso,   o   
algoritmo   deve   informar   o   maior   e   o   menor   número   digitado */

#include <stdio.h>

int main(){
    int num[10], maior, menor;
    int cont = 1;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o %d° número: ", i);
        scanf("%d", &num[i]);

        if (cont == 1)
            maior = menor = num[1];
        else if (num[i] > maior)
            maior = num[i];
        else if (num[i] < menor)
            menor = num[i];
        cont++;
    }
    printf("O maior número é: %d \n", maior);
    printf("O menor número é: %d \n", menor);
    return 0;
}