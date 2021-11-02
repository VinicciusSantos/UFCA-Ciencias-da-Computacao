#include <stdio.h>

int main () {
    float hora;
    printf("Digite um horário: ");
    scanf("%f",&hora);
    if (hora > 3.0 && hora <= 5.0)
        printf("Madrugada"); // Madrugada: 03h ~ 05h)
    else if ((hora > 23.0 && hora < 24.0) || (hora <= 3.0 && hora >= 0.0))
        printf("Tunts"); // Tunts: 23h ~ 03h)
    else if (hora <= 13.0)
        printf("Manhã"); // Manhã: 05h ~ 13h)
    else if (hora <= 18.0)
        printf("Tarde"); // Tarde: 13h ~ 18h)
    else if (hora <= 23.0)
        printf("Noite"); // Noite: 18h ~ 23h)
    else
        printf("Hora inválida.");
    return 0;
}
