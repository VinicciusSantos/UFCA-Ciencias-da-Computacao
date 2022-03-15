#include <stdio.h>
#include <stdlib.h>

float percentual(int n1, int n2)
{
    return n1 * n2 / 100;
}

int main()
{
    int n1, n2;
    printf("Primeiro Numero: ");
    scanf("%d", &n1);
    printf("Segundo Numero: ");
    scanf("%d", &n2);

    float perc = percentual(n1, n2);
    printf("Percentual: %.1f", perc);
}