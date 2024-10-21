#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    for (int i = strlen(nome) - 2; i >= 0; i--) {
        putchar(nome[i]);
    }
    return 0;
}
