#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    char palavra1[100], palavra2[100], palavra3[100];

    printf("Este programa lê três palavras do teclado e imprime-as na ordem inversa\n");

    printf("Digite a primeira palavra: ");
    scanf("%99s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%99s", palavra2);
    printf("Digite a terceira palavra: ");
    scanf("%99s", palavra3);

    printf("\nPalavras escritas na ordem inversa\n");
    printf("%s\n", palavra3);
    printf("%s\n", palavra2);
    printf("%s\n", palavra1);

    return 0;
}
