#include <stdio.h>

main()
{
	float comp, larg, a, p;
	
	printf("\nDigite o comprimento do terreno:");
	scanf("%f" , &comp);
	printf("\nDigite a largura do terreno:");
	scanf("%f" , &larg);
	
	a= comp*larg;
	p=2*(comp+larg);
	
	printf("\nArea = %.2f e Perimetro %.2fM" , a, p);
}
