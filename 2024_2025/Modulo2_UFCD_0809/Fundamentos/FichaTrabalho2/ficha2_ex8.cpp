#include<stdio.h>
#include<locale.h>

int main ()
{
    float dif, peso;
    char nome[25];

    printf("Este programa permite verificar se o utilizador tem um peso superior a 70kg\n");

    printf("Digite o seu nome: \n");
    scanf("%s", nome);

    printf("Digite o seu peso: \n");
    scanf("%f", &peso);

    if (peso < 70) {
        dif = 70.0 - peso;
        printf("Falta ao %s %2.2fkg para atingir os 70kg\n", nome, dif);
    }
    printf("Programa vai terminar!");
}
