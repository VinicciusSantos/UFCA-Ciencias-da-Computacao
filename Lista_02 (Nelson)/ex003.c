#include <stdlib.h>
#include <stdio.h>

// Faça um número que receba uma medida em metros e que imprima o equivalente em centimetros.

int main(){
    float m, cm;
    printf("Digite o valor em metros: ");
    scanf("%f", &m);
    cm = m * 100;
    printf("&f metros em centímetros são: %.2f \n", cm);
}