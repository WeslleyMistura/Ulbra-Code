algoritmo "semnome"
var
   n, i, cont, s, val:inteiro
inicio
      escreva("Digite um número entre 1 e 3:")
      leia(n)
      se n = 1 entao
         cont:= 2
      senao
           se n = 2 entao
              cont:= 3
           senao
                cont:= 0
           fimse
      fimse
      enquanto i < cont faca
               escreva("Digite um valor inteiro:")
               leia(val)
               s:= s + val
               i:= i + 1
      fimenquanto
      escreva("A soma é: ", s)
fimalgoritmo


