#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba a massa e a altura de uma pessoa. O programa deve calcular e
// imprimir o IMC dessa pessoa, Além de, em seguida, em seguida, informar qual situação a
// pessoa se enquadra.

int main(){
    float altura, massa, imc;
    printf("Digite seu peso em Kg: ");
    scanf("%f", &massa);
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    if (imc <= 20){
        printf("IMC: %2.f (Abaixo do peso) \n", imc);
    } else {
        if (imc <= 25){
            printf("IMC: %2.f (Peso Normal) \n", imc);
        } else {
            if (imc <= 30){
                printf("IMC: %2.f (Sobrepeso) \n", imc);
            } else {
                if (imc <= 40){
                    printf("IMC: %2.f (Obesidade) \n", imc);
                } else {
                    printf("IMC: %2.f (Obesidade Mórbida) \n", imc);
                }
            }
        }
    }
    return 0;
}