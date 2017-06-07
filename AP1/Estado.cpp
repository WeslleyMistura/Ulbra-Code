#include<stdio.h>
#include<conio.h>

main()
{
	char codigo;
	
	printf("\nDigite a letra para o seu estado: ");
	printf("\nDigite (r) para Rio Grande do Sul");
	printf("\nDigite (s) para Santa Catarina");
	printf("\nDigite (p) para Parana");
	scanf("%c",&codigo);
	
	if((codigo == 'r'))
		printf("\nGaucho!");
		{
			if((codigo=='s'))
			printf("\nCatarina!");
		}
		{
			if((codigo=='p'))
			printf("\nParanaense!");
		}
		{
			if((codigo!='r')&&(codigo!='p')&&(codigo!='s'))
			printf("\nEstado nao identificado!");
		}
}
