#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int n1, n2;
    printf("Primeiro Numero: ");
    scanf("%d", &n1);
    printf("Segundo Numero: ");
    scanf("%d", &n2);

    int som = soma(n1, n2);
    printf("%d + %d = %d \n", n1, n2, som);
}