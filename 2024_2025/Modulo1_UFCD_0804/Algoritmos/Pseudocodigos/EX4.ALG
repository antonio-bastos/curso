Algoritmo "ex4"
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)

Var
// Se��o de Declara��es das vari�veis 
     quantidade: real
     preco: real
     total: real
     produto: caractere

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

    escreva ("Digite o nome do produto: ")
    leia (produto)
    escreva ("Digite a quandidade do produto: ")
    leia (quantidade)
    escreva ("Digite o pre�o do produto: ")
    leia (preco)
    total <- quantidade * preco
    escreva ("O valor total do ", produto, " � ", total)

Fimalgoritmo