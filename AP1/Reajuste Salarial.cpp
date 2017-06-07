#include<stdio.h>
#include<conio.h>

main()
{
	float sal,codigo;
	
	printf("\nEscreva o codigo do funcionario: ");
	printf("\nDigite 0 para outro cargo: ");
	printf("\nDigite 1 para tecnico: ");
	printf("\nDigite 2 para gerente: ");
	scanf("%f", &codigo);
	
	printf("\nInforme o salario do funcionario: ");
	scanf("%f", &sal);
	if((codigo == 0))
		printf("\nO funcionario recebera:%.2f", (sal+(sal*0.2)));
		{
			if((codigo == 1))
				printf("\nO funcionario recebera:%.2f", (sal+(sal*0.5)));
		}
		{
			if((codigo == 2))
				printf("\nO funcionario recebera:%.2f", (sal+(sal*0.3)));
		}
	getche();
}
