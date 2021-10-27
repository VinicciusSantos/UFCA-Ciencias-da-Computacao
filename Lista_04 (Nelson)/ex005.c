/*  Faça   um   programa   que   receba   um   número   inteiro   do   usuário   (maior   do   que   1)   e   
imprima   se   ele   é   primo   ou   não.  */

#include <stdio.h>

int main(){
    int num, divisor;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            divisor = i;
            printf("Não é Primo, pois é divisivel por %d \n", i);
            break;
        } else
            divisor = 0;
    }
    if (divisor == 0)
        printf("É Primo! \n");
    return 0;
}