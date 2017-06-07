#include<stdio.h>
#include<conio.h>

main()
{
	int n1;
	
	printf("Digite um numero: ");
	scanf("%i",&n1);
	if((n1>100)&&(n1<1000))
		printf("\nEle esta na faixa entre 100 e 1000");
		{
		if((n1<100)||(n1>100))
			printf("\nNao esta na faixa");
		}

}
