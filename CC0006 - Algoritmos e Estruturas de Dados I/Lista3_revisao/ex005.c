#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int soma = 0;
    printf("Numero: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            soma += i;

            if (i+1 < n)
            {
                printf("+ ");
            }
        }
    }    

    printf("= %d", soma);
}