Algoritmo "medianota"
//  
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2024/09/27
Var
// Se��o de Declara��es das vari�veis 
num1, num2, final: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
escreva ("Digite a primeira nota que obteve: ")
leia(num1)
escreva ("Digite a segunda nota que obteve: ")
leia(num2)
final <- (num1 + num2)/2
se (final >= 10 ) entao
escreva ("O aluno foi aprovado!")
senao
escreva ("O aluno foi reprovado!")
fimse

Fimalgoritmo