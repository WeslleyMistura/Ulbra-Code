algoritmo "tentativas"
var
   n, num, i:inteiro
inicio
      escreva("Digite um valor: ")
      leia(n)
      escreva("Digite um valor: ")
      leia(num)
      i:= 1
      enquanto ((n < 0) ou (n > 10)) e ((num < 0) ou (num > 10)) faca
               escreva("Digite um valor: ")
               leia(n)
               escreva("Digite um valor: ")
               leia(num)
               i:= i+1
      fimenquanto
      escreva("Foram", i ," tentativas")
fimalgoritmo

