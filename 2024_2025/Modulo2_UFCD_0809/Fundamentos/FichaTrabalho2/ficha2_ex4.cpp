#include <stdio.h>
/*Demonstração do funcionamento dos operadores relacionais*/

int main(void)
{
    int a=13, b=5;
    printf("Considerando a = %d e b = %d (TRUE => 1 e FALSE => 0)\n",a,b);
    printf("(a==b) => %d\n",a==b); //Operador de igualdade
    printf("(a!=b) => %d\n",a!=b); //Operador diferente
    printf("(a<b) => %d\n",a<b);   //Operador menor que
    printf("(a>b) => %d\n",a>b);   //Operador maior que
    printf("(a<=b) => %d\n",a<=b); //Operador menor ou igual
    printf("(a>=b) => %d\n",a>=b); //Operador maior ou igual
}
