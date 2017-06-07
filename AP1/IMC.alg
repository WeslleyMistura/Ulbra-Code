algoritmo "IMC"
var
M,H,IMC:real
inicio
escreva("Qual o seu peso em kg? ")
Leia (m)
escreva("Qual a sua altura em metros? ")
Leia (h)
IMC<-m/(h*h)
se IMC<18.5 entao
   escreva ("Abaixo do peso. IMC = ",IMC:5:2)
senao
   se IMC<25 entao
      escreva ("Peso normal. IMC = ",IMC:5:2)
   senao
      se IMC<30 entao
         escreva ("Sobre peso. IMC = ",IMC:5:2)
      senao
         se IMC<35 entao
            escreva ("Obeso leve. IMC = ",IMC:5:2)
         senao
            se IMC<40 entao
               escreva ("Obeso moderado. IMC = ",IMC:5:2)
            senao
               se IMC>=40 entao
                  escreva("Obeso mórbito. IMC = ",IMC:5:2)
               fimse
            fimse
         fimse
      fimse
   fimse
fimse
fimalgoritmo
