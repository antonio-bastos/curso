#include <stdio.h>

int main(void) 
{
    int num1, num2;
    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &num2);

    printf("A media dos dois números inteiros é %d", (num1+num2)/2);
}