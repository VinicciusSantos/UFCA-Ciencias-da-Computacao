#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        getchar();
        printf("Ao quadrado: %d \n", n * n);
    } while (n != 0);
}