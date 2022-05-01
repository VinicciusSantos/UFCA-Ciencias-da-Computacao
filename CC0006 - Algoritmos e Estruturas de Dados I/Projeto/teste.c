#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", rand() % 66);
    }
}