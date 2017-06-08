using System;

class Estado
{
    public static void Main()
    {
        char cod;

        Console.WriteLine("Digite a letra para seu estado:");
        Console.WriteLine("Digite (r) para Rio Grande do Sul:");
        Console.WriteLine("Digite (s) para Santa Catarina:");
        Console.WriteLine("Digite (p) para Paraná:");
        cod = char.Parse(Console.ReadLine());

        do
        {
            if(cod == 'r')
            {
                Console.WriteLine("Gaúcho!");
            }
            if(cod == 's')
            {
                Console.WriteLine("Catarinense!");
            }
            if(cod == 'p')
            {
                Console.WriteLine("Paranaense!");
            }
            if((cod != 'r')&&(cod != 's')&&(cod != 'p'));
            {
                Console.WriteLine("Estado não identificado!");
            }
        }while((cod == 'r')||(cod == 's')||(cod == 'p'));
        Console.ReadLine();
    }
}