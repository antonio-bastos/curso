#include <stdio.h>
#include <string.h>

int main() {
    char nome[20], password[50];

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    while (1) {
        printf("Digite a sua senha: ");
        scanf("%s", password);

        if (strcmp(nome, password) == 0) {
            printf("A senha não pode ser igual ao nome. \n");
        } else {
            printf("Senha aceita.\n");
            break;
        }
    }

    return 0;
}
