#include <stdio.h>

/* Crie um algoritmo que entre com o valor de x, calcule e imprima o valor de f(x).
1 , se x ≤ 1
2 , se 1 < x ≤ 2
2x , se 2 < x ≤ 4
5x+3/x-16, se x > 4
*/

int main(){
    float x, fx;
    printf("Digite um valor: ");
    scanf("%f", &x);
    if (x<=1)
        fx = 1;
    else if (x<=2)
        fx =2;
    else if (x<=4)
        fx = 2*x;
    else
    fx = (5*x+3)/(x-16);

    printf("f(%.2f) é %.2f \n", x, fx);
    return 0;
}