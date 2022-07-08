#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

char p[10][20]; 


typedef struct{
	char pergunta [100]; //define número máximo de caracteres da pergunta
	char resposta [100]; //define número máximo de caracteres da resposta
	int posicao;
	int linha;
	int coluna;
} registro; //nome da struct

//Função para ler Dados
registro lerDados(int contador){
    int np = contador; //utilizado para incrementar o número das perguntas e respostas
	char opcao;
	int ophv;
	registro r;
	int linha, coluna;



	while(opcao != 27) 
	{
		printf("Informe a pergunta %d:\n ", np);
		fflush(stdin); //permite que a pergunta tenha espaço entre as palavras
		gets (r.pergunta);

		printf("Informe a resposta %d:\n ", np);
		fflush(stdin);
		gets (r.resposta);

		//Realiza a validação da posição. 
		do{
			printf("Informe a posição da resposta %d %c: (1 - Vertical ou 2 - Horizontal)\n ", np);
			scanf("%i",&ophv); 

			if(ophv != 1 && ophv != 2){
                printf("\n Valor nao encontrado, tente novamente \n"); //caso o valor digitado não corresponda ao esperado
			}
		}while(ophv != 1 && ophv != 2);

		r.posicao = ophv;
		printf("Insira a linha da primeira letra\n"); 
		scanf("%i", &linha);
		r.linha = linha-1;
		printf("Insira a coluna da primeira letra\n");
		scanf("%i", &coluna);
		r.coluna = coluna-1;

		return r;
	}

}



void jogar(registro r) //função que permite jogar
{
	char respostaJogador[40]; 
	char respostaTeste[40];
    int result = 2;

	int posicao;
	int linha;
	int coluna;

	do{
		//printa as perguntas e a orientação da palavra e permite que o jogador responda
		printf("\nPergunta: %s", r.pergunta); 
		printf("\nPosição: %i", r.posicao);
	    printf("\nInforme a resposta:\n ");
	    scanf("%s" ,&respostaJogador); // lê a resposta do jogador

	    // strcmp:função que retorna 0 se as strings forem iguais
		result = strcmp(respostaJogador, r.resposta);

	    if(result != 0){ //caso a resposta esteja errada
		printf("\nResposta incorreta. Tente novamente!!");
		}else{
		printf("\nResposta correta!");}

	}
	while(result !=  0); 

    int aux=0;
    int i=0;
    int j=0;
    int a=0;

    if (r.posicao == 1){ //coloca as palavras verticais na matriz
        j = r.coluna;
        aux = strlen(r.resposta);
        for(a=0 , i=r.linha;a<aux;a++ , i++){
            p[i][j]=r.resposta[a];
        }
    }

    if (r.posicao == 2){ //coloca as palavras horizontais na matriz
        i = r.linha;
        aux = strlen(r.resposta);
        for(a=0 , j=r.coluna;a<aux ;a++ , j++){
            p[i][j]=r.resposta[a];
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
    int i, j, escolha; 
    int contador = 1; 
    registro r;
    for(i=0; i<20; i++){
        for(j=0; j<40; j++){
             p[i][j]='_';
        }
    }

    do
    {	//menu inicial do jogo
    	printf("\n");
        printf("\n\tBem vindo ao Jogo Palavras Cruzadas\n\n");
        printf(" 1. Inserir Perguntas e respostas\n");
        printf(" 2. Jogar\n");
        printf(" 3. Fechar o programa\n");

        scanf("%d", &continuar);
        system("cls || clear"); 

        switch(continuar)
        {
            case 1:

                //utiliza a função lerDados
            	printf("Quantas palavras deseja utilizar?\n");
            	scanf("%i", &escolha);
            	for (i = 0; i < escolha; i++){

            	palavrasCruzadas[i] = lerDados(contador);
				contador = contador +1; //Incrementa 1 no número de perguntas e respostas na variável np
				}

                system("cls");

                break;

            case 2: //utiliza a função jogar
            	printf("vamos jogar?\n");
                for(i=0; i< escolha; i++){
            		jogar(palavrasCruzadas[i]);
				    }
				    printf("\n");
                for(i=0; i<=10; i++){
                    for(j=0;j<=20;j++){

                        printf("%c ", p[i][j]);
                    }
                    printf("\n");
                }

                printf("\nParabéns vc venceu\n");

                return 0;

                break;

    

            case 3:
                sair();
                break;


            default:
                printf("Digite uma opção valida\n");
        }
    } while(continuar);
}
