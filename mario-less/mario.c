#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Definindo as variaveis

    int alt;
    int linha;
    int coluna;
    int espaco;
    int recuo;

    // Solicitar o usuário o tamanha da altura da pirâmide

    do
    {
        alt = get_int("Digite a altura da pirâmide: ");
    }
    while (alt < 1 || alt > 8);

    // Iniciar criação das #

    for (linha = 0; linha < alt; linha++)
    {

        // Definir recuo

        recuo = alt - linha - 1;

        for (espaco = 0; espaco < recuo; espaco++)
        {

            printf(" ");
        }

        for (coluna = 0; coluna <= linha; coluna++)
        {

            printf("#");
        }

       printf("\n");
    }
}
