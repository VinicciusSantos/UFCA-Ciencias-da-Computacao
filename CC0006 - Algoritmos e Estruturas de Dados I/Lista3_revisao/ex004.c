#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float menor, maior;
    float notas[100];
    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Nota do %d aluno: ", i+1);
        scanf("%f", &notas[i]);

        if (i == 0)
        {
            maior = notas[i];
            menor = notas[i];
        }

        if (notas[i] < menor)
        {
            menor = notas[i];
        }

        if (notas[i] > maior)
        {
            maior = notas[i];
        }
    }

    printf("Menor: %.1f \n", menor);
    printf("Maior: %.1f \n", maior);
}