#include <stdio.h>
#include <stdlib.h>

void semana(int n)
{
    switch (n) {
    case 1: printf("Domingo \n"); break;
    case 2: printf("Segunda \n"); break;
    case 3: printf("Terca \n"); break;
    case 4: printf("Quarta \n"); break;
    case 5: printf("Quinta \n"); break;
    case 6: printf("Sexta \n"); break;
    case 7: printf("Sabado \n"); break;
    default: printf("Dia Invalido \n"); break;
    }
}

int main()
{
    int n;
    printf("Numero: ");
    scanf("%d", &n);

    semana(n);
}