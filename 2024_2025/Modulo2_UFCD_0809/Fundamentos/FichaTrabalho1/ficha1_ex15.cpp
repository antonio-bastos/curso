#include <stdio.h>
#define texto "Dados do utilizador"

int main()
{
    printf("%s\n", texto);
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite o seu nome:\n");
    scanf("%s", nome);
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("Digite a sua altura:\n");
    scanf("%f", &altura);
    printf("Dados do utilizador:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
}