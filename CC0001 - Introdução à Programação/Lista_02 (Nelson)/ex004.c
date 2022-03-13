#include <stdio.h>
#include <stdlib.h>

// Faça um algorítmo que receba o raio de um círcul, calcule e imprima a área do círculo

int main(){
    float raio, area;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = 3.1415 * (raio * raio);
    printf("A área do círculo é: %f", area);
    return 0;
}