#include <stdio.h>
#include <locale.h>

//
// Criado por Gabrielle de Moura Pereira
//

int main () {
setlocale(LC_ALL, "Portuguese"); //comando para acentuação

    int ano; //apresentação da variável
    printf ("Digite um ano");
    scanf("%i", &ano);

    //condições para um ano ser bissexto
    if (ano%400==0){
        printf("\nO ano %i é um ano bissexto", ano);}

    else if (ano%4==0){
        if (ano%100!=0)
            printf("\nO ano %i é um ano bissexto", ano);}

    //caso não seja bissexto:
    else {
        printf("\nO ano %i não é um ano bissexto", ano);
    }
    return 0;
}
