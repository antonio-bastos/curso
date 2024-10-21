#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    char texto[100];
    int numcarateres = 0;

    printf("Este programa permite a leitura de um texto com o máximo de 99 caracteres e ");
    printf("de seguida imprime o número de caracteres digitados\n");

    printf("Digite um pequeno texto: \n");
    fgets(texto, sizeof(texto), stdin);

    while (texto[numcarateres] != '\0' && texto[numcarateres] != '\n') {
        numcarateres++;
    }

    printf("Número de caracteres digitados: %d\n", numcarateres);

    return 0;
}
