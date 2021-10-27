/* Faça  um  programa  que  receba  3  notas  de  um  aluno  e  mostre  a  média.  O  programa                                   
deve  ter  validação  de  notas.  Ou  seja,  se  uma  nota  digitada  for  menor  que  0  ou  maior                                   
que  10,  o  programa  deve  informar  "nota  inválida"e  pedir  para  o  usuário  digitar  a  nota                               
novamente. */

#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        if (n1 < 0 || n1 > 10)
            printf("Nota Inválida, Digite novamente \n");
    } while (n1 < 0 || n1 > 10);
    
    do{
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        if (n2 < 0 || n2 > 10)
            printf("Nota Inválida, Digite novamente \n");
    } while (n2 < 0 || n2 > 10);
    
    do{
        printf("Digite a terceira nota: ");
        scanf("%f", &n3);
        if (n3 < 0 || n3 > 10)
            printf("Nota Inválida, Digite novamente \n");
    } while (n3 < 0 || n3 > 10);
    
    media = (n1 + n2 + n3) / 3;
    printf("A média do aluno é: %.2f \n", media);
}