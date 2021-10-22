#include <stdlib.h>
#include <stdio.h>

// Faça um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
// quantidade de dias do aluguel. Calcule o preço do aluguel, levando em consideração que o
// aluguel do carro custa R$ 60,00 por dia e R$ 0,15 por Km rodado.

int main(){
    float kms_percorridos, preco_final, custo_dia, custo_km;
    int dias;
    custo_dia = 60;
    custo_km = 0.15;

    printf("Quantos Quilômetros foram percorridos? ");
    scanf("%f", &kms_percorridos);
    printf("Quantidade de dias de aluguel: ");
    scanf("%i", &dias);

    preco_final = dias * custo_dia + custo_km * kms_percorridos;

    printf("O custo final é de: < R$%.2f >\n", preco_final);
    return 0;
}