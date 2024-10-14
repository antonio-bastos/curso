#include <stdio.h>
#include <locale.h>

int main ()
{
    int num;
    printf("Este programa efetua a leitura de um número inteiro e apresenta os dois números inteiros seguintes: \n");
    printf("Digite um número inteiro: \n");

    scanf("%d", &num);
    int num1seg = num + 1;
    int num2seg = num1seg + 1;
    printf("Os dois número sinteiros seguintes são %d e %d", num1seg, num2seg);
}