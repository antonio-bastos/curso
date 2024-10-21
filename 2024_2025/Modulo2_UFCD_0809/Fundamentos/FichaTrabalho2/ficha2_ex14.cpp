#include <stdio.h>
#include <locale.h>

int main(void) {
    float num1, num2;
    char opcao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número (diferente de zero): ");
    scanf("%f", &num2);

    if (num2 == 0) {
        printf("O segundo número não pode ser zero. Tente novamente.\n");
        return 0;
    }

    printf("Selecione a operação desejada:\n");
    printf("a) Adição\n");
    printf("b) Subtração\n");
    printf("c) Multiplicação\n");
    printf("d) Divisão\n");
    printf("Opção: ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
            printf("Resultado da Adição: %.2f\n", num1 + num2);
            break;
        case 'b':
            printf("Resultado da Subtração: %.2f\n", num1 - num2);
            break;
        case 'c':
            printf("Resultado da Multiplicação: %.2f\n", num1 * num2);
            break;
        case 'd':
            printf("Resultado da Divisão: %.2f\n", num1 / num2);
            break;
        default:
            printf("Opção Inválida!\n");
            break;
    }

    return 0;
}
