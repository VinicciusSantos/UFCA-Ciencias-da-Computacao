#include <stdio.h>

int main()
{
    float metros;
    printf("Metros: ");
    scanf("%f", &metros);

    float centimetros = metros * 100;
    printf("Centimetros: %.1f\n", centimetros);
}