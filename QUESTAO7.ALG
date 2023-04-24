Algoritmo "questao7"

Var

sBruto, vPrestacao, sBruto30 : real

Inicio

escreva("Digite o salario bruto: " )
leia(sBruto)
escreva("Digite o valor da prestacao: ")
leia(vPrestacao)

sBruto30 <- (sBruto * 0.30)

se sBruto30 > vPrestacao entao
   escreva("O emprestimo pode ser concedido")
   senao
   escreva("O emprestimo nao pode ser concedido")
fimse


Fimalgoritmo