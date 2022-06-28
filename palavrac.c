#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

typedef struct{
	char pergunta [100];
	char resposta [100];
	int posicao;
} registro;

//Função para ler Dados
registro lerDados(int contador){
    int np = contador;
	char opcao;
	char letra;
	registro r;

	while(opcao != 27) //27 corresponde ao ESC para sair
	{
		printf("Informe a pergunta %d:\n ", np);
		fflush(stdin);
		gets (r.pergunta);

		printf("Informe a resposta %d:\n ", np);
		fflush(stdin);
		gets (r.resposta);

		//Realiza a validação da posição. A letra deve ser H ou V senão entra no laço de repetição até que digite a letra correta
		do{
			printf("Informe a posição da resposta %d %c: (V - Vertical ou H - Horizontal) ", np);
			scanf("%s",&letra);
		}while(letra !='V'&& letra !='v'&& letra !='h'&& letra !='H');

		r.posicao = letra;

		printf("\n Pressione <ESC> para sair ou <Enter> para continuar :\n \n");

		opcao=getch();    //Faz a leitura da opção digitada

		if(opcao == 27)
		{
			if(np<2) //o número de perguntas digitadas não pode ser menor que dois
			{
			    printf("Numero mínimo de perguntas deve ser maior que 1! \n \n");
				opcao = 0;
		    }
			else
		    {
			}
		}

		return r;
	}

}



void jogar(registro r)
{
	char respostaJogador[40];
	char respostaTeste[40];
	int result = 2;

	do{
		printf("\nPergunta: %s", r.pergunta);
		printf("\nPosicao: %c", r.posicao);
	    printf("\nInforme a resposta:\n ");
	    scanf("%s" ,&respostaJogador);

	    // strcmp:função que retorna 0 se as strings forem iguais
		result = strcmp(respostaJogador, r.resposta);

	    if(result != 0)
		printf("\nResposta incorreta. Tente novamente!!");
		else
		printf("\nResposta correta!");

	}
	while(result !=  0);

    //if(result == 0)
	//printf("\n Resposta Correta!!! %s", r.resposta);
}


void imprimirDados(registro r){
    int l=0,j=0;
char m[20][20];

    m[l][j]='_';
     for (l=0; l <= 20; l++){
        for(j=0; j<=20; j++){
        printf("%c ", m[l][j]);

}
     }
}
void sair()
{
    printf("Até logo\n");
    exit(0);
}


int main()
{
	setlocale(LC_ALL,"portuguese"); //permite os caracteres especiais em português
    int continuar=1;

    registro palavrasCruzadas[4]; //instanciar o struct registro
    int i;
    int contador = 1;

    do
    {
    	printf("\n");
        printf("\n\tBem vindo ao Jogo Palavras Cruzadas\n\n");
        printf(" 1. Inserir Perguntas e respostas\n");
        printf(" 2. Jogar\n");
        printf(" 3. Imprimir\n");
        printf(" 4. Fechar o programa\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:

            	//lerDados(palavrasCruzadas);
            	for (i = 0; i < 4; i++){

            	palavrasCruzadas[i] = lerDados(contador);
				contador = contador +1; //Incrementa 1 no número de perguntas e respostas na variável np
				}


                break;

            case 2:
            	printf("vamos jogar?\n");
                for(i=0; i<2; i++){
            		jogar(palavrasCruzadas[i]);
				    }
                break;

            case 3:
            	printf("\n\t Imprimindo dados palavras cruzadas\n");
                for(i=0; i<4; i++){
            		imprimirDados(palavrasCruzadas[i]);
				    }

                break;

            case 4:
                sair();
                break;


            default:
                printf("Digite uma opção valida\n");

    }
    } while(continuar);
    return 0;
}
