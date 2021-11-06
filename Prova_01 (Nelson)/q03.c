#include <stdio.h>

/* Faça um algoritmo que receba a idade, sexo (1 - masculino, 2 - feminino) e vacina (1 - Tomou, 2 - Não tomou) de n
pessoas (n informado pelo usuário).
(a) Calcule a média da idade das pessoas do sexo feminino.
(b) Qual o percentual de mulheres que não tomaram vacina?
(c) Qual o percentual de homens que tomaram vacina?
(d) Calcule a média da idade das pessoas do sexo masculino. */

int main(){
    float media_fem, media_masc, porc_masc, porc_fem;
    int n;
    int cont = 1;
    int idade_masc = 0;
    int idade_fem = 0;
    int m_sem_vacina = 0;
    int h_com_vacina = 0;
    int fem = 0;
    int masc = 0;

    printf("Digite a quantidade de pessoas: ");
    scanf("%i", &n);

    while (cont <= n)
    {
        int idade, sexo, vacina;

        // Recebendo os valores
        printf("-=-=-=-=-=-=- %iª Pessoa -=-=-=-=-=-=-\n", cont);
        printf("Digite a idade: ");
        scanf("%i", &idade);
        printf("Digite o sexo [Masc=1, Fem=2]: ");
        scanf("%i", &sexo);
        printf("Tomou a vacina? [S=1, N=2] ");
        scanf("%i", &vacina);

        if (sexo == 1) // homem
            idade_masc += idade;
            masc++;
            if (vacina == 2)
                m_sem_vacina++;

        else if (sexo == 2) // Mulher
            idade_fem += idade;
            fem++;
            if (vacina == 1)
                h_com_vacina++;

        cont++;
    }

    media_fem = idade_fem / fem;
    media_masc = idade_masc / masc;
    porc_masc = h_com_vacina * 100 / n;
    porc_fem = m_sem_vacina * 100 / n;
    
    printf("%i\n", idade_fem);
    printf("%i\n", fem);
    printf("%i\n", idade_masc);
    printf("%i\n", masc);

    printf("A) Média de Idade das Mulheres é: %.1f anos\n", media_fem);
    printf("B) Mulheres que não tomaram vacina: %.1f%% \n", porc_fem);
    printf("C) Homens que tomaram vacina: %.1f%% \n", porc_masc);
    printf("D) Média de Idade dos Homens é: %.1f anos\n", media_masc);
    return 0;
}