#include <stdio.h>
#include <locale.h>

int main() {
    int num;

    printf("Este programa determina se um dado número inteiro é menor que 100, ");
    printf("entre 100 e 200, ou maior que 200 \n");

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 100) {
        printf("O Valor de %d é menor que 100\n", num);
    }

    if (num >= 100 && num <= 200) {
        printf("O valor de %d encontra-se entre 100 e 200\n", num);
    }

    if (num > 200) {
        printf("O valor de %d é superior a 200\n", num);
    }

    return 0;
}
