#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero: ")/
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", 2*i+1);
    }
    printf("\n");
}