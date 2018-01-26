#include <stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char s[100];
	int l;
	int i;
	printf("enter the string");
	scanf("%[^\n]",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		printf("%c\n ",s[i]);
	}
}