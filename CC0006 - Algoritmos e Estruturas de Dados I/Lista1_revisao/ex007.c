#include <stdio.h>

int main()
{
    int lado;
    printf("Lado do Quadrado: ");
    scanf("%d", &lado);

    int area = lado * lado;
    printf("Area: %d \n", area);
    printf("Dobro da Area: %d \n", area * 2);
}