#include<stdio.h>
#include<conio.h>

main()
{	
    float n1,n2,media;
    
    printf("Nota1: ");
    scanf("%f",&n1);
    printf("\nNota2: ");	
    scanf("%f", &n2);
    media=(n1+n2*2)/3;
    printf("\nMedia: %.2f",media);
    if((media>=9)&&(media<10))
    	printf("\nConceito A!");
    	{
		if((media>=7.5)&&(media<9))
    		printf("\nConceito B!");
		}
    	{
		if((media>=6)&&(media<7.5))
    		printf("\nConceito C!");
		}
    	{
		if((media<6))
    		printf("\nConceito D!");
		}
		{
		if((media>10))
			printf("\nValor invalido!");
		}
	getche();	
}
