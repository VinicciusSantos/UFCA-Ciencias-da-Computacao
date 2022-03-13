#include <stdio.h>

/* Faça um algoritmo que receba uma temperatura em Celsius e depois pergunte se o usuá-
rio deseja digitar outra temperatura (1 - Pra sim, Outra tecla para não). O programa
deve continuar perguntando temperaturas enquanto o usuário desejar. Após o usuário
escolher que não quer mais digitar temperaturas, o programa deve informar a média das
temperaturas digitadas em graus Celcius e o somatório das temperaturas em Fahrenheit.
Considere que F = 9/5 * C + 32. */

int main(){
    float temp_c, temp_f, media_c=0, quant=0, soma_c=0, soma_f=0;
    int continuar;
    do{
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Digite uma temperatura em °C: ");
        scanf("%f", &temp_c);
        temp_f = (temp_c * 9/5) + 32;
        printf("%.1f°C equivalem à %.1f°f \n", temp_c, temp_f);
        soma_c += temp_c;
        soma_f += temp_f;
        quant++;

        while(1){
            printf("Deseja continuar? [1-Sim / 2-Não] ");
            scanf("%d", &continuar);
            if (continuar == 1 || continuar == 2)
                break;
        } 
    } while (continuar == 1);
    
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    media_c = soma_c / quant;
    printf("\n-=-=-=-=-=-=-=- RESULTADOS =-=-=-=-=-=-=-=-\n");
    printf("A Média de Temperatura digitadas é: %.1f°C  \n", media_c);
    printf("O somatório das Yemperaturas é: %.1f°f \n", soma_f);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    return 0;
}