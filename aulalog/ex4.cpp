#include <stdio.h>

main()
{
	float preco, desc, np;
	
	
	printf("\nDigite o preco do produto:");
		scanf("%f", &preco);
	
	desc= preco*0.1;
	np= preco - desc;
	

   
   printf("\nPreco do produto  R& %.2f", preco);
   printf("\nvalor do desconto R$ %.2f", desc);
   printf("\nvalor a pagar R$ %.2f", np);
   
}
