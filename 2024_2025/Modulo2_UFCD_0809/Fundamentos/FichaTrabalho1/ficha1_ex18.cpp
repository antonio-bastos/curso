#include <cstdio>
#include <locale.h>

int main()
{
    int lado, perimetro;

    printf("Este programa permite calcular o perímetro de um triângulo equilátero\n");
    printf("Digite o valor do lado: ");
    scanf("%d", &lado);
    perimetro = lado * 3;
    printf("O perímetro do triângulo equilátero com lado %d é %d", lado, perimetro);
}
