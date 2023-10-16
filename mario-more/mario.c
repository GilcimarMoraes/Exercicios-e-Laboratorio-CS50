#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Definição das variaveis

    int altura, linha, coluna, espaco;

    // solicitar o usuário digitar a altura da pirâmide

    do
    {
        altura = get_int("Digite a altura da pirâmide: ");
    }

    while (altura < 1 || altura > 8);

    // Iniciar loops para preenchimento da pirâmide

    for (linha = 0; linha < altura; linha++)
    {
        // criar lado esquerdo da pirâmide

        for (espaco = 0; espaco < (altura - linha - 1); espaco++)
        {
            printf(" ");
        }

        for (coluna = 0; coluna <= linha; coluna++)
        {
            printf("#");
        }

        // Criar espaço entre as pirâmides

        printf("  ");

        // Construção do lado direito da pirâmide

        for (coluna = 0; coluna <= linha; coluna++)

        {
            printf("#");
        }

        printf("\n");
    }
}