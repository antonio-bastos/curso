#include <stdio.h>
#include <locale.h>

int main() {
    char nome[50], endereco[200], telemovel[30];

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite o seu endereço: ");
    fgets(endereco, 200, stdin);

    printf("Digite o seu telemóvel: ");
    fgets(telemovel, 30, stdin);

    printf("\nInformações fornecidas:");
    printf("\nNome: %s", nome);
    printf("\nEndereço: %s", endereco);
    printf("\nTelemóvel: %s", telemovel);
}
