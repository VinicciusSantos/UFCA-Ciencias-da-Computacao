#include <stdio.h>
#include <stdlib.h>

// Faça um programa que crie um vetor dinâmico de tamanho N (dado pelo usuário).
// Depois, preencha o vetor usando um ponteiro auxiliar (não o vetor).

int main()
{
    int *vet;
    int i, n;
    
    printf("Informe o numero de componentes do vetor: ");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));
    int *aux = vet;
  
    for (i = 0; i < n; i++) 
    {
        printf("Digite o valor para a posicao %d do vetor: ", i+1);
        scanf("%d", aux+i);
    }
    
    printf("-----\n");
    
    for (i = 0;i < n; i++)
        printf("%d\n",vet[i]);
}