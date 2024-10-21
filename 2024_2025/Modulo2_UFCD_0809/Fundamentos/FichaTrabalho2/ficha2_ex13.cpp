#include <stdio.h>
#include <locale.h>

int main(void) {
    int dia;
    printf("Este programa permite determinar o dia da semana de acordo com o valor indicado\n");

    printf("Digite um n£mero inteiro entre 1 e 7: ");
    scanf("%d", &dia);
    switch (dia) {
    case 1: printf("Segunda-feira");
        break;
    case 2: printf("Ter‡a-feira");
        break;
    case 3: printf("Quarta-feira");
        break;
    case 4: printf("Quinta-feira");
        break;
    case 5: printf("Sexta-feira");
        break;
    case 6: printf("S bado");
        break;
    case 7: printf("Domingo");
        break;
    default: printf("Valor inv lido");
    }
    return 0;
}
