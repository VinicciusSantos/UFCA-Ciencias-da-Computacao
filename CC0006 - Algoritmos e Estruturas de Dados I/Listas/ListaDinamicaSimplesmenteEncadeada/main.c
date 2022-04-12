#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "listaDinamicaSimplesmenteEncadeada.h"

int main()
{
    Lista *aed;
    aed = NULL;
    aed = criar();

    struct aluno a;
    a.matricula = 87346543;
    strcpy(a.nome,"seila");
    a.av1 = 5;
    a.av2 = 6;
    a.pr = 10;

    struct aluno b;
    b.matricula = 51235;
    strcpy(b.nome,"oioi");
    b.av1 = 8;
    b.av2 = 6;
    b.pr = 0;
    inserirInicio(aed, a);
    inserirInicio(aed, b);

    imprimir(aed);
    //destruir(aed);
    return 0;
}