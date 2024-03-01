#include <stdio.h>

main()
{
	int num, c, d, u;
	printf("\nDigite um numero de 3 algarismos:");
	scanf("%d", &num);
	
	c= num /100;
	d=(num %100)/10;
	u= num %10;
	
	printf("\nCentena: %d Dezena: %d unidade: %d", c,d,u);}
	
