#include <stdio.h>

main()
{
	float peso, quilo, total;
	
	printf("\n Digite o preco do quilograma do sorvete:");
	scanf("%f", &quilo);
	printf("\nDigite o peso (em Kg)mda cesta de sorvete:");
	scanf("%f", &peso);
	
	total = peso*quilo;
	
	printf("\nValor a pagar R$ %.2f",total);}

