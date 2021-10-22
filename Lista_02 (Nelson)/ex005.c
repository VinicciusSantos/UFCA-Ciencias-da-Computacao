#include <stdlib.h>
#include <stdio.h>

// Faça um algoritmo que peça a quantidade de horas trabalhadas no mês e a quantidade de dinheiro
// recebio por hora. O programa deve imprimir o total recebido no mês.

int main(){
    float din_hora, din_mes, quant_horas;
    printf("Quantas horas você trabalha por mês? ");
    scanf("%f", &quant_horas);
    printf("Quanto você ganha por hora? ");
    scanf("%f", &din_hora);

    din_mes = din_hora * quant_horas;
    printf("Você recebe R$%.2f por mês \n", din_mes);
    return 0;
}