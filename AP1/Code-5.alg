algoritmo "intervalos"
var
   p, s, t, q, val:inteiro
inicio
      repita
            escreva("Digite um valor inteiro: ")
            leia(val)
            se (val >= 0) e (val <=25) entao
               p:= p + 1
            senao
                 se (val >= 26) e (val <= 50) entao
                    s:= s + 1
                 senao
                      se (val >= 51) e (val <= 75) entao
                         t:= t + 1
                      senao
                           se (val >= 76) e (val <= 100) entao
                              q:= q + 1
                           fimse
                      fimse
                 fimse
            fimse
      ate (p = 10) ou (s = 10) ou (t = 10) ou (q = 10)
fimalgoritmo

