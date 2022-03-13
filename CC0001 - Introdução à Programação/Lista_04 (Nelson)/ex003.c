/*  Faça   um   algoritmo   que   receba   dois   números   inteiros   positivos   do   usuário.   O                           
programa  deve  calcular  e  exibir  a  multiplicação  dos  dois  números.  (Não  pode  utilizar                           
o   operador   de   multiplicação   *).   */

#include <stdio.h>

int main(){
    unsigned int n1, n2;
    int mult = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    for (int i = 0; i < n2; i++)
    {
        mult += n1;
    }
    printf("O produto é: %d \n", mult);
}