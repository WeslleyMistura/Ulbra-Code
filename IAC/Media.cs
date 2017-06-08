using System;

class Media
{
	public static void Main()
	{
        float g1= 0;
        float g2= 0;
        float med= 0;

		Console.WriteLine("Digite a nota da g1:");
		g1 = float.Parse(Console.ReadLine());
        
        Console.WriteLine("Digite a nota da g2:");
        g2 = float.Parse(Console.ReadLine());
        
        med = (g1 + (g2 * 2))/3;

        Console.WriteLine("Sua Média é " + med);

        if(med>=6){
            Console.WriteLine("Parabéns! Você passou");
        }
        else{
                Console.WriteLine("Você reprovou!");
        }

        Console.ReadLine();
	}
}