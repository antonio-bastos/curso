Algoritmo "positivo_negativo"
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)

Var
// Se��o de Declara��es das vari�veis 
   num: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval("Digite    um n�mero: ")
   leia(num)
   se (num = 0) entao
      escreva("O n�mero introduzido � nulo!")
   senao
        se (num > 0) entao
           escreva("O n�mero introduzido � positivo!")
        senao
             escreva("O n�mero introduzido � negativo!")
        fimse
   fimse
Fimalgoritmo