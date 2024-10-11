Algoritmo "maior_igual_dois_numeros"
// Descrição: Determina se dois números inteiros são iguais entre si ou qual o maior deles

Var
// Seção de Declarações das variáveis
 
 num1, num2: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval ("Digite um número inteiro: ")
   leia(num1)
   escreval ("Digite outro número inteiro: ")
   leia(num2)
   se (num1 = num2) entao
      escreva("Os números são iguais!")
   senao
        se (num1 > num2) entao
           escreva("O maior dos dois números é ", num2)
        senao
             escreva("O maior dos dois números é ", num2)
        fimse
   fimse
Fimalgoritmo