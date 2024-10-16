#include <stdio.h>

//Demonstração do funcionamento dos operadores lógicos
int main(void)
{
    int x=13, y=5, z=2;

    printf("OPERADORES LÓGICOS (&&, ||, !)\n");
    printf("Considerando x = %d, y = %d e z = %d (TRUE <=> 1 e FALSE <=> 0)\n",x,y,z);
    printf("((x>y) && (y<z)) = %d\n", ((x>y) && (y<z)));
    printf("((x>y) || (y>z)) = %d\n", ((x>y) || (y>z)));
    printf("!(x>y) = %d\n", !(x>y));

    return 0;
}
