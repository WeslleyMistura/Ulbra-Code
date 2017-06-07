#include<stdio.h>
#include<conio.h>

main()
{
	int n1,n2,n3,soma;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%i",&n1);
	printf("\nDigite o segundo numero: ");
	scanf("%i",&n2);
	printf("\nDigite o terceiro numero: ");
	scanf("%i",&n3);
	
	soma=(n1+n2+n3);
	
	if(soma>50)
		printf("\nA soma dos tres numeros e maior que 50!");
	else
		printf("\nA soma dos tres numeros e menor que 50!");
	getche();
}
