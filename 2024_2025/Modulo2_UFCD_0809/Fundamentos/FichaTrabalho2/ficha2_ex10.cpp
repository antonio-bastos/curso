#include <stdio.h>
#include <locale.h>

int main() {
    int num1, num2;

    printf("Este programa determina se dois números inteiros são iguais ou qual o maior deles\n");

    printf("Digite um número inteiro: \n");
    scanf("%d", &num1);

    printf("Digite outro número inteiro: \n");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Os números são iguais!");
    } else if (num1 > num2) {
        printf("O maior dos dois números é %d", num1);
    } else {
        printf("O maior dos dois números é %d", num2);
    }

    return 0;
}
