#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long cartao;

    do
    {
        cartao = get_long("Digite o número do seu cartão: ");
    }
    while (cartao < 0); // Número do cartão deve ser maior que zero

    // Encontrar os digitos iniciais do cartao

    long long n = cartao;

    int amex, mastercard, visa1, visa2;
    amex = n / 10000000000000;
    mastercard = n / 100000000000000;
    visa1 = n / 1000000000000000;
    visa2 = n / 1000000000000;

    // Implementar o Algoritmo de Luhn's

    int soma1 = 0;
    int soma2 = 0;
    int contador = 0;

    while (cartao > 0)
    {
        int digito = cartao % 10;

        // Separando o digitos do cartão

        if (contador % 2 == 0)
        {
            soma1 = soma1 + digito;
        }
        else
        {
            int dobro = digito * 2;
            soma2 = soma2 + (dobro / 10) + (dobro % 10);
        }

        cartao /= 10;
        contador++;
    }

    // Somando os digitos de acordo com o algoritmo de Luhn obtidos acima

    int soma_total = soma1 + soma2;

    // Verificar primeiro digito do cartão

    // Definindo Validade do cartão e Bandeira

    if (soma_total % 10 == 0)

    {
        if (amex == 34 || amex == 37)
        {
            printf("AMEX\n");
        }

        else if (mastercard == 51 || mastercard == 52 || mastercard == 53 || mastercard == 54 || mastercard == 55)
        {
            printf("MASTERCARD\n");
        }

        else if (visa1 == 4 || visa2 == 4)
        {
            printf("VISA\n");
        }

        else
        {
            printf("INVALID\n");
        }

    }

    else
    {
        printf("INVALID\n");
    }
}