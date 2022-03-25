#include <stdio.h>

int main()
{
    float ganho_por_hora;
    printf("Quanto vc ganha por hora? ");
    scanf("%f", &ganho_por_hora);

    int horas;
    printf("Quantas horas vc trabalha por mes? ");
    scanf("%d", &horas);

    float salario = ganho_por_hora * horas;
    printf("Salario: %.2f\n", salario);
}