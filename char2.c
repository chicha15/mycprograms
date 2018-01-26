#include <stdio.h>
main()
{
	char array;
	char character=65;
	int a=5,b=6,variable;
	if(a>b)
		variable=a;
	else
		variable=b;
	printf("%d",variable++);
	printf("%c",++character);
	printf("%c",character--);
	printf("%c",character);
}