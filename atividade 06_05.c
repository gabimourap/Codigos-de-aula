#include <stdio.h>
#include<math.h>

//
// Created by Gabrielle de Moura Pereira
// N�mero USP: 13828178
//

int main() {
int x, y, n; // apresenta��o das vari�veis

    printf("Insira um numero \n");
    scanf("%d", &x); // ler as vari�veis

    y= x%10;

    while(x>=10){ //condi��o para encontrar o �ltimo algarismo do n�mero
    x=x/10;}

    n=x%1;
    x=x-n;

    printf("A soma eh: %d", y+x); //exibi��o dos resultados547

    return 0;
}
