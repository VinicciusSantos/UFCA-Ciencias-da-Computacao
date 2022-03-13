#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite o 1° Número: ");
    scanf("%d", &n1);
    printf("Digite o 2° Número: ");
    scanf("%d", &n2);

    int soma = n1 + n2;
    printf("%d + %d = %d \n", n1, n2, soma);
}