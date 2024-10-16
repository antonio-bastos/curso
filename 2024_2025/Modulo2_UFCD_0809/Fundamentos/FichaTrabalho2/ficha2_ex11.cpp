#include <stdio.h>
#include <locale.h>

int main() {
    int num;

    printf("Este programa determina se um número é de valor positivo, negativo ou nulo\n");

    printf("Digite um número inteiro: \n");
    scanf("%d", &num);

    if (num == 0) {
        printf("Valor nulo!s\n");
    } else if (num > 0) {
        printf("Valor positivo!\n");
    } else {
        printf("Valor negativo!\n");
    }

    return 0;
}
