#include <stdio.h>
#include <locale.h>

//
// Criado por Gabrielle de Moura Pereira
//

int main () {
setlocale(LC_ALL, "Portuguese"); //comando para acentua��o

    int ano; //apresenta��o da vari�vel
    printf ("Digite um ano");
    scanf("%i", &ano);

    //condi��es para um ano ser bissexto
    if (ano%400==0){
        printf("\nO ano %i � um ano bissexto", ano);}

    else if (ano%4==0){
        if (ano%100!=0)
            printf("\nO ano %i � um ano bissexto", ano);}

    //caso n�o seja bissexto:
    else {
        printf("\nO ano %i n�o � um ano bissexto", ano);
    }
    return 0;
}
