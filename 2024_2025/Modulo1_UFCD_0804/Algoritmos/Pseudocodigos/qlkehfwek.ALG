Algoritmo "ficha5_ex4"
//  
//  
// Descri��o   : Aquex4i voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2024/09/27
Var
// Se��o de Declara��es das vari�veis 
num1, num2: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
escreva ("Digite o primeiro n�mero (1-100): ")
leia(num1)
escreva ("Digite o segundo n�mero (1-100): ")
leia(num2)

se (num1 >= 1) e (num1 <= 100) e (num2 >= 1) e (num2 <= 100) entao
   escreva(num1 + num2)
senao
   escreva("Os n�meros n�o est�o dentro do crit�rio!")
fimse

Fimalgoritmo