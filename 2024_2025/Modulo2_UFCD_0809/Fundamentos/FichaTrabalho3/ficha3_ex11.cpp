#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    char nome[20], sexo[2], estado_civil[2];
    int idade;
    float salario;

    while (1) {
        printf("Digite o seu nome: ");
        scanf("%s", nome);
        if (strlen(nome) > 3) {
            printf("OK\n");
            break;
        } else {
            printf("O nome tem que ter mais de 3 caracteres.\n");
        }
    }

    while (1) {
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        if (idade >= 0 && idade <= 130) {
            printf("OK\n");
            break;
        } else {
            printf("A idade tem que ser entre 0 e 130.\n");
        }
    }

    while (1) {
        printf("Digite o seu salário: ");
        scanf("%f", &salario);

        if (salario > 0) {
            printf("OK\n");
            break;
        } else {
            printf("O salário tem que ser maior que 0.\n");
        }
    }

    while (1) {
        printf("Digite o seu sexo (m/f): ");
        scanf("%s", sexo);

        if (sexo[0] == 'm' || sexo[0] == 'f') {
            printf("OK\n");
            break;
        } else {
            printf("O sexo tem que ser M ou F.\n");
        }
    }

    while (1) {
        printf("Qual é o seu estado civil? (s, c, v, d): ");
        scanf("%s", estado_civil);

        if (estado_civil[0] == 's' || estado_civil[0] == 'c' || estado_civil[0] == 'v' || estado_civil[0] == 'd') {
            printf("OK\n");
            break;
        } else {
            printf("O estado civil tem que ser s, c, v ou d.\n");
        }
    }

    printf("Dados do utilizador: \n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Salário: %.2f\n", salario);

    if (sexo[0] == 'M') {
        printf("Sexo: Masculino\n");
    } else {
        printf("Sexo: Feminino\n");
    }

    if (estado_civil[0] == 's') {
        printf("Estado civil: Solteiro\n");
    } else if (estado_civil[0] == 'c') {
        printf("Estado civil: Casado\n");
    } else if (estado_civil[0] == 'v') {
        printf("Estado civil: Viúvo\n");
    } else {
        printf("Estado civil: Divorciado\n");
    }

    return 0;
}
