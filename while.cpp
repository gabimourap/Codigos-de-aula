#include <stdio.h>

    int main (){

    char ch;

    printf("Digite um caracter (digite s para sair):\n");
    scanf("%s,&ch");

    while(ch!='s')  {
        printf("Digite outro caracter (digite S para sair):\n");
        scanf("%s",&ch);
    }
    printf("\nSaindo do loop\n");
}
