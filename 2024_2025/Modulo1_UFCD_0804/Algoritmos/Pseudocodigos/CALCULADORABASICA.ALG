Algoritmo "calculadorabasica"
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)

Var
// Se��o de Declara��es das vari�veis 
operacao: caractere
num1, num2, resultado: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Digite o primeiro n�mero: ")
   leia(num1)
   escreva("Digite a opera��o (+, -, /, *): ")
   leia(operacao)
   escreva("Digite o segundo n�mero: ")
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
                 escreva("Opera��o n�o v�lida!")
   fimescolha

Fimalgoritmo