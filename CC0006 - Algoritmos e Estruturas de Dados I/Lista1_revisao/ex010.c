#include <stdio.h>

int main()
{
    float salario;
    printf("Seu Salario: ");
    scanf("%f", &salario);

    float imposto = salario * 8 / 100;
    float sindicato = salario * 5 / 100;
    float sal_liquido = salario - imposto - sindicato;

    printf("Salario Bruto: %.2f\n", salario);
    printf("Imposto: %.2f\n", imposto);
    printf("Sindicato: %.2f\n", sindicato);
    printf("Salário Liquido: %.2f\n", sal_liquido);
}