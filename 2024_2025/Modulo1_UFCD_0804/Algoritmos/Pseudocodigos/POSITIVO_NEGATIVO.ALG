Algoritmo "positivo_negativo"
// Descrição   : Aqui você descreve o que o programa faz! (função)

Var
// Seção de Declarações das variáveis 
   num: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Digite    um número: ")
   leia(num)
   se (num = 0) entao
      escreva("O número introduzido é nulo!")
   senao
        se (num > 0) entao
           escreva("O número introduzido é positivo!")
        senao
             escreva("O número introduzido é negativo!")
        fimse
   fimse
Fimalgoritmo