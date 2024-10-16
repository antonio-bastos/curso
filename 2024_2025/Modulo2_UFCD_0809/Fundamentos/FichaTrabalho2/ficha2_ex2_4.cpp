#include <stdio.h>
// Demonstração do operador %=
int main(void) {
    int m=4, n=6;
    n%=m;
    printf("Resto da divisão inteira de n por m = %d\n", n);
    return 0;
}
