Algoritmo "ficha5_ex4"
//  
//  
// Descrição   : Aquex4i você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2024/09/27
Var
// Seção de Declarações das variáveis 
num1, num2: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreva ("Digite o primeiro número (1-100): ")
leia(num1)
escreva ("Digite o segundo número (1-100): ")
leia(num2)

se (num1 >= 1) e (num1 <= 100) e (num2 >= 1) e (num2 <= 100) entao
   escreva(num1 + num2)
senao
   escreva("Os números não estão dentro do critério!")
fimse

Fimalgoritmo