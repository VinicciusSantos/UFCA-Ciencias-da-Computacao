#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Digite a 1ª Nota: ");
    scanf("%d", &n1);

    printf("Digite a 2ª Nota: ");
    scanf("%d", &n2);

    printf("Digite a 3ª Nota: ");
    scanf("%d", &n3);

    float media = (n1 + n2 + n3) / 3;
    printf("A sua média é %.2f \n", media);
}