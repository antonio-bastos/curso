Algoritmo "maior_igual_dois_numeros"
// Descri��o: Determina se dois n�meros inteiros s�o iguais entre si ou qual o maior deles

Var
// Se��o de Declara��es das vari�veis
 
 num1, num2: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval ("Digite um n�mero inteiro: ")
   leia(num1)
   escreval ("Digite outro n�mero inteiro: ")
   leia(num2)
   se (num1 = num2) entao
      escreva("Os n�meros s�o iguais!")
   senao
        se (num1 > num2) entao
           escreva("O maior dos dois n�meros � ", num2)
        senao
             escreva("O maior dos dois n�meros � ", num2)
        fimse
   fimse
Fimalgoritmo