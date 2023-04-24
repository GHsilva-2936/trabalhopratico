Algoritmo "questao11"

Var

num1, num2, n, i, valorTermo: inteiro

Inicio

escreva("Digite o primeiro numero ")
leia(num1)
escreva("Digite o segundo numero")
leia(num2)

n <- 10

para i de 3 ate n faca

se(i % 2 = 0)entao
     valorTermo <- num2 - num1
senao
     valorTermo <- num2 + num1
fimse

escreva(valorTermo)
num1 <- num2
num2 <- valorTermo
fimpara

Fimalgoritmo