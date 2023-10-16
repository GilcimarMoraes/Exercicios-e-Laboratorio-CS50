#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char x = get_char("Você concorda? ");

        if(x == 'y' || x == 'Y'){
            printf("Voce concorda. \n");
            }
        else if(x == 'n' || x == 'N'){
            printf("Você não concorda. \n");
            }
        else{
            printf("A opcão desejada nao é válida. \n");
        }

}