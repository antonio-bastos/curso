#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
    char a, b, c;

    printf("Este programa lê um carater do teclado\n");

    printf("\nDigite um caracter: ");
    a = getch();
    printf("\n----------leitura getch----------\n");
    printf("%c", a);

    printf("\nDigite novamente um caracter: ");
    b = getche();
    printf("\n----------leitura getche----------\n");
    printf("%c", b);

    printf("\nDigite novamente um caracter: ");
    c = getchar();
    printf("\n----------leitura getchar----------\n");
    printf("%c", c);

    return 0;
}
