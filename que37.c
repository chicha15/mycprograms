#include <stdio.h>
main()
{
	char *ch;
	ch=(char*)malloc(20);
	scanf("%d[^\n]",ch);
	while(*(ch)!='\0')
	{
		printf("%c",ch);
		ch++;
	}
}