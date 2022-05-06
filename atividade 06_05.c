#include <stdio.h>
#include<math.h>

//
// Created by Gabrielle de Moura Pereira
// Número USP: 13828178
//

int main() {
int x, y, n; // apresentação das variáveis

    printf("Insira um numero \n");
    scanf("%d", &x); // ler as variáveis

    y= x%10;

    while(x>=10){ //condição para encontrar o último algarismo do número
    x=x/10;}

    n=x%1;
    x=x-n;

    printf("A soma eh: %d", y+x); //exibição dos resultados547

    return 0;
}
