#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que receba a quantidade de votos nules, brancos e válidos de uma eleição.
// O programa deve imprimir o percentual de cada tipo de voto em relação ao total de eleitores.

int main(){
    int nulos, brancos, validos, total;
    float porc_nulos, porc_brancos, porc_validos;
    printf("Total de Votos Nulos: ");
    scanf("%i", &nulos);
    printf("Total de Votos brancos: ");
    scanf("%i", &brancos);
    printf("Total de Votos Válidos: ");
    scanf("%i", &validos);

    total = nulos + brancos + validos;
    porc_nulos = (100 * nulos) / total;
    porc_brancos = (100 * brancos) / total;
    porc_validos = (100 * validos) / total;

    printf("Nulos: %i votos (%.2f%%)\n", nulos, porc_nulos);
    printf("Brancos: %i votos (%.2f%%)\n", brancos, porc_brancos);
    printf("Válidos: %i votos (%.2f%%)\n", validos, porc_validos);
    printf("Total: %i votos\n", total);

    return 0;
}