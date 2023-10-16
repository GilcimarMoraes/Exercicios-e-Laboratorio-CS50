#include <stdio.h>
#include <cs50.h>

int main(void){
    // Solicitar população inicial de Ilhamas

    int pi;

    do{
        pi = get_int("Digite população inicial de Ilhamas: ");
    }
    while(pi < 9);

    // Solicitar a população final de Ilhamas

    int pf;

    do{
        pf = get_int("Digite a população final de Ilhamas: ");
    }

    while(pi > pf);

    // Quantidade de anos ate atingir populacao final

    int anos = 0;

    do{

        pi += (pi / 3) - (pi / 4);
        anos++;

    }
    while(pi < pf);

          // imprimir quantidade de anos

        printf("A quantidades de anos para atigir a população final é: %i ano(s), \n", anos);
}