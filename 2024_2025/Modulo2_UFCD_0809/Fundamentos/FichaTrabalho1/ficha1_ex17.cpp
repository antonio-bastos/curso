#include <cstdio>
#include <locale.h>

int main()
{
    int num;
    printf("Este programa permite a leitura de um número inteiro e calcula o seu quadrado\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    int quadrado = num * num;
    printf("O quadrado de %d é %d", num, num * num);
}
