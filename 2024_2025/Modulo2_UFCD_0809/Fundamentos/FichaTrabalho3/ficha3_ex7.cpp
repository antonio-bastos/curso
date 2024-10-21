#include <stdio.h>
#include <locale.h>

int main() {
    char nome[20];
    printf("Digite o seu nome: ");
    scanf("%19s", nome);

    for (int i = 0; i < 10; ++i) {
        printf("%s\n", nome);
    }
}
