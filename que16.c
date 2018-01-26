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
	i=0;
	while(i<l)
	{
	s[i]=toupper(s[i]);
	i=i+2;
		}
		printf("%s",s);
}
