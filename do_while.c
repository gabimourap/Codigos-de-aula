#include <stdio.h>

void main ()
{
    char ch;
    printf ("Digite um caracter (digite s para sair);");
    scanf ("%s", &ch);
    if (ch == 's') {
        printf ("Saindo do loop");
    }
    else {
    do {
        printf ("O caracter digitado e %c.\n", ch);
        printf ("Digite outro caracter (digite s para sair):\n");
        scanf ("%s", &ch);
    } while (ch != 's');
    }
    printf ("Saindo do loop");

    return 0;
}
