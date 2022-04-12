#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;
    float n3;

    printf("Primeiro Numero: ");
    scanf("%d", &n1);

    printf("Segundo Numero: ");
    scanf("%d", &n2);

    printf("Terceiro Numero: ");
    scanf("%f", &n3);

    float i = (2 * n1) * (n2 / 2);
    float ii = (3 * n1) + n3;
    float iii = pow(n3, 3);

    printf("1 - %.1f \n", i);
    printf("2 - %.1f \n", ii);
    printf("3 - %.1f \n", iii);
}