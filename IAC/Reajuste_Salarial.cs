using System;

class Reajuste_Salarial
{
    public static void Main()
    {
        float sal;
        int cod;

        Console.WriteLine("Escolha a função do funcionário!");
        Console.WriteLine("Digite 0 para um cargo qualquer!");
        Console.WriteLine("Digite 1 para técnico!");
        Console.WriteLine("Digite 2 para gerente!");
        cod = int.Parse(Console.ReadLine());

        Console.WriteLine("Informe o salário do funcionário:");
        sal = float.Parse(Console.ReadLine());

        if(cod == 0)
        {
            Console.WriteLine("O funcionário recebera: " + (sal+(sal*0.2)));
        }
        if(cod == 1)
        {
            Console.WriteLine("O funcionário recebera: " + (sal+(sal*0.5)));
        }
        if(cod == 2)
        {
            Console.WriteLine("O funcionário recebera: " + (sal+(sal*0.3)));
        }
        Console.ReadLine();
    }
}