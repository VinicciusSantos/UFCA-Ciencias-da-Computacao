#include <stdio.h>
#include <stdlib.h>

int par(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Numero: ");
    scanf("%d", &n);

    int p = par(n);
    printf("Par: %d", p);
}