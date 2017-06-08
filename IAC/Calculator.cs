using System;

class Calculator
{
	public static void Main()
	{
        int NumeroUm;
		Console.WriteLine("Digite um número!");
		NumeroUm = int.Parse(Console.ReadLine());
        Console.WriteLine("O usuário digitou o número " + NumeroUm );
        Console.ReadLine();
	}
}