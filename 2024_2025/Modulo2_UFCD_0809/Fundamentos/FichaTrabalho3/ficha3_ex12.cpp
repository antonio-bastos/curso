#include <stdio.h>
#include <locale.h>

int main (void) {
    int inicial, final, tabuada;

    printf("Tabuada de: ");
    scanf("%d", &tabuada);

    while (1) {
        printf("Inicia em: ");
        scanf("%d", &inicial);

        printf("Termina em: ");
        scanf("%d", &final);

        if (final >= inicial) {
            break;
        } else {
            printf("O valor final tem que ser maior que o valor inicial. \n");
        }
    }

    printf("Tabuada");
    for (int i = inicial; i <= final; i++) {
        printf("%d x %d = %d\n", tabuada, i, tabuada * i);
    }

    return 0;
}
