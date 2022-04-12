#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d e Positivo! \n", num);
    }
    else if (num < 0)
    {
        printf("%d e Negativo! \n", num);
    }
    else
    {
        printf("%d e Nulo! \n", num);
    }
}