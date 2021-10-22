#include <stdio.h>
#include <stdlib.h>

// Faça um programa que pergunte quanto você ganha por mês. Calcule e imprima:
// 1 - Salário Bruto;
// 2 - Quanto pagou de imposto (8%);
// 3 - Quanto pagou de sindicado (5%);
// 4 - Salário Líquido.

int main(){
    float sal_bruto, imposto, sindicato, sal_liquido;

    printf("Qual o seu salário bruto? ");
    scanf("%f", &sal_bruto);

    imposto = sal_bruto * 8 / 100;
    sindicato = sal_bruto * 5 / 100;
    sal_liquido = sal_bruto - imposto - sindicato;

    printf("Seu salário bruto é de: R$%.2f\n", sal_bruto);
    printf("O imposto custou: R$%.2f\n", imposto);
    printf("O valor do sindicato é de: R$%.2f\n", sindicato);
    printf("O seu salário líquido é de: R$%.2f\n", sal_liquido);

    return 0;
}