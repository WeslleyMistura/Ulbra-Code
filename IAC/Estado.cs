using System;

class Estado
{
    public static void Main()
    {
        int cod=0;

        do
        {
            if(!(cod==1)||(cod==2)||(cod==3)){
            Console.WriteLine("Digite o número para seu estado:");
            Console.WriteLine("Digite (1) para Rio Grande do Sul:");
            Console.WriteLine("Digite (2) para Santa Catarina:");
            Console.WriteLine("Digite (3) para Paraná:");
            cod = int.Parse(Console.ReadLine());
            }
            if(cod == 1)
            {
                Console.Clear();
                Console.WriteLine("Gaúcho!");
                break;
            }  
            if(cod == 2)
            {
                Console.Clear();
                Console.WriteLine("Catarinense!");
                break;
            }  
            if(cod == 3)
            {
                Console.Clear();
                Console.WriteLine("Paranaense!");
                break;
            }
            if((cod != 1)&(cod != 2)&(cod != 3)) 
            {
                Console.Clear();
                Console.WriteLine("Estado não identificado!");
            }
            
        }while((cod != 1)||(cod != 2)||(cod != 3));
        Console.ReadLine();
    }
}
