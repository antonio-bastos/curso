#include <stdio.h>

int main(void) 
{
    int comprimento, largura;
    printf("Digite o comprimento do retângulo: \n");
    scanf("%d", &comprimento);
    printf("Digite a altura do retângulo: \n");
    scanf("%d", &largura);

    printf("A área do retângulo é %d", comprimento*largura);
}