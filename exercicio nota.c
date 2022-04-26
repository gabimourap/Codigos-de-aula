#include <stdio.h>
#include <math.h>
#include <locale.h>

//
// Created by Gabrielle de Moura Pereira
//  C�digo USP: 13828178
//

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Portuguese"); //comando para aceitar a acentua��o

    float nota1, soma, maior, menor, md, cent; // identifica��o das vari�veis

    menor = maior = 0;
    soma = 0;

    while (nota1 >= 0) //loop at� uma nota negativa ser inserida
        {
        printf("\nInforme uma nota (nota negativa para terminar)\n");
        scanf("%f", &nota1);

        if (nota1 >= 5) // condi��o na qual a nota � considerada alta
        maior = (maior + 1);

        if (nota1 < 5) // condi��o na qual a nota � considerada baixa
        menor = (menor + 1);


        soma = soma + nota1;
        md = soma / (maior + menor); //c�lculo da m�dia

        cent = (maior * 100)/ (maior + menor); // c�lculo da porcentagem

        //respostas da compila��o
        printf ("A quantidade de alunos com nota acima da m�dia � %.2f e abaixo da m�dia � %.2f\n", maior, menor);
        printf ("A m�dia da turma �: %.2f\n", md);
        printf ("A porcentagem de alunos com nota maior ou igual a cinco �: %.2f\n", cent);
    }
    return 0;

}
