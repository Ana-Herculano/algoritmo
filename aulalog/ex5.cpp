#include <stdio.h>

main()
{
	float fixo, com, vendas, sal;
	printf("\nDigite o salariof");
	scanf("%f", &fixo);
	printf("\nDigite o total das vendas");
	scanf("%f", &vendas);
	
	com = vendas*0.04;
	sal = fixo+com;
	
	printf("\nsalario fixo R$ %.2f", fixo);
	printf("\ncomissao R$ %.2f", com);
	printf ("\nsalriofinal R4$  %.2f", sal)
;
}
	
