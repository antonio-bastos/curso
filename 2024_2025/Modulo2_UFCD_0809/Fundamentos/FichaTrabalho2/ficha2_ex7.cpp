#include<stdio.h>
#include<locale.h>

int main ()
{
    int valor1, valor2, valor3;

    printf("Este programa que permite efetuar a leitura de três valores inteiros e calcular o triplo de um valor, o produto de um número com outro número e o quadrado de um número. \n");

    printf("Digite o primeiro número: ");
    scanf("%d", &valor1);
    printf("Digite o segundo número: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro número: ");
    scanf("%d", &valor3);

    printf("---");

    int triplo = valor1 * 3;
    printf("O triplo do número %d é %d.\n", valor1, triplo);

    int produto = valor2 * valor3;
    printf("O produto do número %d com o número %d é %d.\n", valor2, valor3, produto);

    int quadrado = valor3*valor3;
    printf("O quadrado do número %d é %d.\n", valor1, triplo);
}
