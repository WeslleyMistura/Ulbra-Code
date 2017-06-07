#include<stdio.h>
#include<conio.h>

main()
{
	int n1;
	
	printf("\nDigite um numero: ");
	scanf("%i",&n1);
	
	if((n1>30))
		printf("\nO numero final sera:%i", (n1/2));
		{
			if((n1<30))
			printf("\nO numero final sera:%i", (n1*2));
		}
	getche();
}
