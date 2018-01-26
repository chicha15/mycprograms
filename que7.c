#include <stdio.h>
#include<string.h>
main()
{
	char s[100];
	int l;
	int i;
	printf("enter the string");
	scanf("%[^\n]",s);
	l=strlen(s);
	for(i=0;i<l;i=i+2)
	s[i]=toupper(s[i]);
	printf("%s",s);
		}
