#include <stdio.h>
#include <locale.h>

int main() {
    int cod;

    printf("Este programa permite apresentar o caracter correspondente ao código ASCII ");
    printf("(fora do intervalo 33 a 126)\n");
    printf("Indique um número inteiro: \n");
    scanf("%d", &cod);

    if (cod >= 33 && cod <= 126) {
        printf("Indicou um código inválido!\n");
    } else {
        printf("O número %d corresponde ao caracter ASCII %c\n", cod, cod);
    }

    return 0;
}
