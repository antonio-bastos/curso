Algoritmo "medianota"
//  
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2024/09/27
Var
// Seção de Declarações das variáveis 
num1, num2, final: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
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