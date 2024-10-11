Algoritmo "ex4"
// Descrição   : Aqui você descreve o que o programa faz! (função)

Var
// Seção de Declarações das variáveis 
     quantidade: real
     preco: real
     total: real
     produto: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

    escreva ("Digite o nome do produto: ")
    leia (produto)
    escreva ("Digite a quandidade do produto: ")
    leia (quantidade)
    escreva ("Digite o preço do produto: ")
    leia (preco)
    total <- quantidade * preco
    escreva ("O valor total do ", produto, " é ", total)

Fimalgoritmo