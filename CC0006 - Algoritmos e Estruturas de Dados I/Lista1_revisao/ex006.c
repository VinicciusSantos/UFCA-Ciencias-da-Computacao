#include <stdio.h>

int main()
{
    float raio;
    printf("Raio do Circulo: ");
    scanf("%f", &raio);

    float area = 3.14 * (raio * raio);
    printf("Area: %.1f\n", area);
}