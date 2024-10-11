Algoritmo "ficha5_ex6"
//  
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 2024/09/27
Var
// Seção de Declarações das variáveis 
peso, altura, imc: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreva("Qual é o seu peso (kg)? ")
leia(peso)   // sem pontos (e.g. 80)
escreva("Qual é a tua altura (cm)? ")
leia(altura) // sem pontos (e.g. 1,80)

imc <- peso / altura ^ 2
// imc <- peso/((altura * altura)/10000)

se (imc <= 18.5) entao
   escreva("Abaixo do peso")
   senao
        se (imc >= 18.5) e (imc <= 25) entao
         escreva("Peso Ideal")
         senao
              se (imc >= 25) e (imc <= 30) entao
                 escreva("Sobrepeso")
                 senao
                      se (imc >= 30) e (imc <= 40) entao
                         escreva("Obesidade")
                         senao
                              se (imc >= 40) entao
                              escreva("Obesidade mórbida")
                              fimse
                      fimse
              fimse
        fimse
fimse


Fimalgoritmo