/* Faça   um   algoritmo   que   receba   um   número   natural   e   imprima   se   ele   é   ou   não                                 
triangular.  Um  número  natural  é  triangular  se  ele  é  produto  de  três  números  naturais                             
consecutivos.  Exemplo:  120  é  triangular,  pois  4 ∗ 5 ∗ 6  =  120.  O  número  6  é  triangular,                             
já   que   1 ∗ 2 ∗ 3   =   6. */

#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int mult = i * (i + 1) * (i + 2);
        if (mult == num)
        {
            printf("É um número triangular \n");
            printf("%d * %d * %d = %d \n", i, (i + 1), (i + 2), num);
            break;
        } 

        else if (mult > num)
        {
            printf("Não é Triangular\n");
            break;
        } 
    }
    return 0;
}