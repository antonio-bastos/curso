#include<stdio.h>
#include<locale.h>

int main()
{
    int num_portateis = 20;
    float custo_portateis = 502.10;
    float custo_total = num_portateis * custo_portateis;
    char moeda[] = "euros";

    printf("Este programa calcula o valor total de portáteis vendidos\n");

    printf("Números de portáteis: %d\n", num_portateis);
    printf("Custo de cada portátil: %.2f %s\n", custo_portateis, moeda);
    printf("Custo Total: %.2f %s\n", custo_total, moeda);
    
    return 0;
}