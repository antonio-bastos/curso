#include <stdio.h>
#include <locale.h>

int main() {
    char nome[100];

    printf("Digite o seu nome: ");
    scanf("%99s", nome);

    printf("As quatro primeiras letras do nome são: %.4s\n", nome);
}
