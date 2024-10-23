#include <stdio.h>
#include <locale.h>

int main (void) {
    int numero, fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("O fatorial de %d é %d\n", numero, fatorial);

    return 0;
}
