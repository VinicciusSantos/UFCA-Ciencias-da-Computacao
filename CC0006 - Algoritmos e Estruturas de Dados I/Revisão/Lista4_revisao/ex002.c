#include <stdio.h>
#include <stdlib.h>

float media(int n1, int n2)
{
    return (n1 + n2) / 2;
}

int main()
{
    int n1, n2;
    printf("Primeiro Numero: ");
    scanf("%d", &n1);
    printf("Segundo Numero: ");
    scanf("%d", &n2);

    float med = media(n1, n2);
    printf("Media: %.2f", med);
}