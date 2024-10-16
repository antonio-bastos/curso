#include <stdio.h>
// Demonstração dos operadores aritméticos
int main()
{
    int a=3,b=2,c,d;
    float e;
    c=a+b;
    printf("Adição = %d\n", c );
    c=a-b;
    printf("Subtração = %d\n", c );
    c=a*b;
    printf("Multiplicação = %d\n", c );
    c=a/b;
    printf("Divisão inteira = %d\n", c );
    e=(float)a/b;
    printf("Divisão real = %f\n", e );

    return 0;
}
