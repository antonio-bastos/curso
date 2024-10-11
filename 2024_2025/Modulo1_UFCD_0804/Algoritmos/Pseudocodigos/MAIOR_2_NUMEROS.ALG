Algoritmo "maior_2_numeros"
// Descrição   : Determina o maior de dois números inteiros

Var
// Seção de Declarações das variáveis 
   num1, num2, maior: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Este algoritmo vai determinar o maior de dois números inteiros. ")
   escreva("Digite um número inteiro: ")
   leia(num1)
   escreva("Digite um número inteiro diferente do número anterior: ")
   leia(num2)
   se (num1 > num2) entao
      maior <- num1
   senao
      maior <- num2
   fimse
   escreva("O maior número dos dois é ", maior)

Fimalgoritmo