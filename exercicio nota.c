#include <stdio.h>
#include <math.h>
#include <locale.h>

//
// Created by Gabrielle de Moura Pereira
//  Código USP: 13828178
//

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese"); //comando para aceitar a acentuação

    float nota1, soma, maior, menor, md, cent; // identificação das variáveis

    menor = maior = 0;
    soma = 0;

    while (nota1 >= 0) //loop até uma nota negativa ser inserida
        {
        printf("\nInforme uma nota (nota negativa para terminar)\n");
        scanf("%f", &nota1);

        if (nota1 >= 5) // condição na qual a nota é considerada alta
        maior = (maior + 1);

        if (nota1 < 5) // condição na qual a nota é considerada baixa
        menor = (menor + 1);


        soma = soma + nota1;
        md = soma / (maior + menor); //cálculo da média

        cent = (maior * 100)/ (maior + menor); // cálculo da porcentagem

        //respostas da compilação
        printf ("A quantidade de alunos com nota acima da média é %.2f e abaixo da média é %.2f\n", maior, menor);
        printf ("A média da turma é: %.2f\n", md);
        printf ("A porcentagem de alunos com nota maior ou igual a cinco é: %.2f\n", cent);
    }
    return 0;

}
