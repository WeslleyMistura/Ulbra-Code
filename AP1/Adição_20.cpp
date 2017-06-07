#include<stdio.h>
#include<conio.h>

main()
{
	int n1,n2,soma;
	
	printf("\nDigite um numero: ");
	scanf("%i",&n1);
	printf("\nDigite um numero: ");
	scanf("%i",&n2);
	
	soma=(n1+n2);
	
	if((soma<=20))
		printf("\nO valor final sera:%i", (soma-5));
	else
		printf("\nO valor final sera:%i", (soma+8));
}		
	
