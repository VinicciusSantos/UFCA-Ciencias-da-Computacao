#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Num1: ");
    scanf("%d", &num1);

    printf("Num2: ");
    scanf("%d", &num2);

    int soma = num1 + num2;

    if (soma > 20)
    {
        soma += 8;
    }
    else if (soma < 20)
    {
        soma -= 5;
    }

    printf("Soma com ajustes: %d", soma);
}