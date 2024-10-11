Algoritmo "calculadorabasica_2"
// Descrição   : Aqui você descreve o que o programa faz! (função)

Var
// Seção de Declarações das variáveis 
operacao: caractere
num1, num2, resultado: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Digite o primeiro número: ")
   leia(num1)
   escreva("Digite a operação (+, -, /, *): ")
   leia(operacao)
   escreva("Digite o segundo número: ")
   leia(num2)
   escolha operacao
        caso "+"
        resultado <- num1 + num2
        escreva(num1, " ", operacao, num2 , " = ", resultado)
        caso "-"
        resultado <- num1 - num2
        escreva(num1, " ", operacao, num2 , " = ", resultado)
        caso "/"
        resultado <- num1 / num2
        escreva(num1, " ", operacao, num2 , " = ", resultado)
        caso "*"
        resultado <- num1 * num2
        escreva(num1, " ", operacao, num2 , " = ", resultado)
        outrocaso
        escreva("Operação não válida!")
   fimescolha

Fimalgoritmo