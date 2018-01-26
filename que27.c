#include <stdio.h>
main()
{
	int i,j,k;
for(i=0;i<=7;i++)
	{
	for(j=0;j<i;j++)
		printf("*");
	for(k=0;k<(9-2*i);k++)
		printf(" ");
	for(j=0;(j<i)&&(j<4);j++)
		printf("*");
	printf("\n");
	}
}
