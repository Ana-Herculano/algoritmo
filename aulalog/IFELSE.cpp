#include <stdio.h>

main()

{
int num, resto;

printf("\nDigite um numero:");
scanf("%d", &num);

resto = num %2;

if (resto ==0)
printf("\n o numero %d e par!", num);
else
printf("\n o numero %d e impar!", num);}
