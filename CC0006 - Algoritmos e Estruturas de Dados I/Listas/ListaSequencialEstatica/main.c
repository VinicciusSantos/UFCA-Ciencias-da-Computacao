#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listasequencialestatica.h"

int main(void)
{
    Lista *li;
    li = NULL;
    li = criar();

    struct aluno a;
    a.matricula = 87346543;
    strcpy(a.nome,"seila");
    a.av1=5;
    a.av2=6;

    struct aluno b;
    b.matricula = 51235;
    b.av1=8;
    b.av2=5;
    
    inserirFim(li, a);
    inserirFim(li, a);
    inserirFim(li, b);

    imprimir(li);
    destruir(li);
    return 0;
}