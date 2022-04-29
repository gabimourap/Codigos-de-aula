#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "Portuguese");

    int x, y;
    int soma=0;

    printf ("Digite X e Y");
    scanf ("%i%i", &x,&y);

    if (x<y){
        for (int i=x; i<=y; i++){
            soma+=i;}
    }
    else {
        for (int i=y; i<=x; i++){
            soma+=i; }
    }
    printf("\nA soma dos números de %i a %i é %i", x,y,soma);

    return 0;
}
