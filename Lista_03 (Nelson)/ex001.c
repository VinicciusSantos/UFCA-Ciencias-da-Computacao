#include <stdio.h>
#include <stdlib.h>

// Construa um algoritmo que leia três números do teclado e calcule a média. Se a média for
// maior ou igual à sete, imprima: "Parabéns, você foi aprovado!". Caso contrário, imprima:
// "Você fará a prova final"

int main(){
    float n1, n2, n3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Sua média foi %.1f \n", media);
    if (media >= 7){
        printf("Parabéns, você foi aprovado \n");
    } else {
        printf("Você fará a prova final \n");
    }
    return 0;
}