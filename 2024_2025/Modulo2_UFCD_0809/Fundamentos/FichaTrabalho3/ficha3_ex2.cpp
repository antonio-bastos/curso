#include <stdio.h>
#include <locale.h>

int main(void) {
    int cod;

    printf("Este programa apresenta os caracteres alfabéticos em maiúsculas\n");
    printf("correspondentes aos códigos ASCII (65 ao 90)\n");

    for (cod = 65; cod < 91; cod++) {
        printf("%d corresponde ao caracter %c\n", cod, cod);
    }

    return 0;
}
