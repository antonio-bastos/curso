#include <stdio.h>
#include <locale.h>

int main(void) {
    int teste1, teste2, teste3, media;
    printf("Este programa permite itentificar se o aluno foi aprovado/reprovado\n");

    printf("Digite a nota do primeiro teste: ");
    scanf("%d", &teste1);
    printf("Digite a nota do segundo teste: ");
    scanf("%d", &teste2);
    printf("Digite a nota do terceiro teste: ");
    scanf("%d", &teste3);

    media = (teste1 + teste2 + teste3) / 3;

    if (media >= 10) {
        printf("Aprovado com média %d\n", media);
    } else {
        printf("Reprovado com média %d\n", media);
    }
    return 0;
}
