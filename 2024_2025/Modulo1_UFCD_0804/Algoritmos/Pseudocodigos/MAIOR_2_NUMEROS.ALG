Algoritmo "maior_2_numeros"
// Descri��o   : Determina o maior de dois n�meros inteiros

Var
// Se��o de Declara��es das vari�veis 
   num1, num2, maior: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Este algoritmo vai determinar o maior de dois n�meros inteiros. ")
   escreva("Digite um n�mero inteiro: ")
   leia(num1)
   escreva("Digite um n�mero inteiro diferente do n�mero anterior: ")
   leia(num2)
   se (num1 > num2) entao
      maior <- num1
   senao
      maior <- num2
   fimse
   escreva("O maior n�mero dos dois � ", maior)

Fimalgoritmo