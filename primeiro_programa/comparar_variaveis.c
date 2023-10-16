#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Digite um numero: ");
    int y = get_int("Digite um numero: ");

    if(x < y){
        printf("O valor de x é menor que y \n");
    }
    else if(x > y){
        printf("x é maior que y \n");
    }
    else if(x == y){
        printf("x é igual a y \n");
    }
}