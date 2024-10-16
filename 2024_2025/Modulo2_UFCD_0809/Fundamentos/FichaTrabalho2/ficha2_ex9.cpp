#include<stdio.h>
#include<locale.h>

int main ()
{
    int num1, num2, maior;

    printf("Este programa determina o maior de dois números inteiros\n");

    printf("Digite um número inteiro: \n");
    scanf("%d", &num1);

    printf("Digite um número inteiro diferente do anterior: \n");
    scanf("%d", &num2);

    if (num1 < num2) {
        maior = num2;
        printf("O número maior dos dois números é %d", maior);
    } else {
        maior = num2;
        printf("O número maior dos dois números é %d", maior);
    }
    return 0;
}
