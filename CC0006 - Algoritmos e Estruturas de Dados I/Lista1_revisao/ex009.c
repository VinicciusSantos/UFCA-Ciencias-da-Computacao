#include <stdio.h>

int main()
{
    float altura;
    printf("Altura: ");
    scanf("%f", &altura);

    float ideal = (72.7 * altura) - 58;
    printf("Peso ideal: %.1f\n", ideal);
}