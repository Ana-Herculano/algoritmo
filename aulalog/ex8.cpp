#include <stdio.h>

main()
{
	int a, b, c;
	printf("\nDigite o valor de A:"); 
	scanf("%d", &a);	
	printf("\nDigite o valor de B:");
	scanf("%d", &b);
	//trocar a com 
	c=a;
	a=b;
	b=c;
	
	printf("\na = %d e B= %d ", a,b);}	
		

