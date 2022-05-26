#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterString(char string[], int c_primeiro, int c_ultimo)
{
    if (c_primeiro >= c_ultimo) return;
    char aux = string[c_primeiro];
    string[c_primeiro] = string[c_ultimo];
    string[c_ultimo] = aux;
    return inverterString(string, c_primeiro+1, c_ultimo-1);
}

int pot(int base, int exp)
{
    if (exp == 1) return base;
    return base * pot(base, exp-1);
}

int fatorial(int num)
{
    if (num == 1) return 1;
    return num * fatorial(num-1);
}

int fibonacci(int termo)
{
    // 0 1 1 2 3 5 8 13 21 34...
    if (termo == 0 || termo == 1) return termo;
    return fibonacci(termo-1) + fibonacci(termo-2);
}

int contaNumeros(float num)
{
    if (num < 0) num *= -1;
    if (num < 10 && num >= 0) return 1;
    return 1 + contaNumeros(num/10);
}

int main(){
    //printf("%d\n", contaNumeros(1000000000));
    //printf("%d\n", pot(3, 3));
    char a[5] = "Paulo";
    inverterString(a, 0, 4);
    printf("%s\n", a);
    printf("Pot: %d\n", pot(2, 10));
}

