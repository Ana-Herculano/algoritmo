#include <stdio.h>

main()
{

int num, suc;
printf("\nDigite um numero entre 0 e 60:");
scanf ("%d", &num);

suc=(num+1)%61;

printf("\no sucessor de %d =%d", num ,suc);
}
