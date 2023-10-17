#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_horas(int horas[], int semanas, char output);

int main(void)
{
    // Usuario indica quantidade de semanas dedicadas
    int semanas = get_int("Número de semanas dedicadas a CS50: ");
    int horas[semanas];

    // Usuario indica a quantidade de horas estudada que cada semana dedicada ao cs50

    for (int i = 1; i <= semanas; i++)
    {
        horas[i] = get_int("Semana %i quantidade de horas: ", i);
    }

    // Usuario tera que escolher se quer saber o total de horas ou a media das horas dedicadas

    char output;
    do
    {
        output = toupper(get_char("Digite T para horas totais ou A para media de horas semanais: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f horas\n", calc_horas(horas, semanas, output));
}

// Função para o calculo das horas
float calc_horas(int horas[], int semanas, char output)
{
    float total = 0;
    float media = 0;

    for (int i = 1; i <= semanas; i++)
    {
        total = total + horas[i];
        media = total / semanas;
    }

    if (output == 'T')
    {
        return total;
    }

    return media;
}