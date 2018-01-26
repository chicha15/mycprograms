#include <stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char s[100];
	char k[100];
	/*char key;*/
	int l;
	int i;
	int j=0;
	printf("enter the string");
	scanf("%[^\n]",s);
	l=strlen(s);
	for(i=0;i<=l;i++)

	{
		if(s[i]!=' '&& s[i]!='\0')
		{
			k[j]=s[i];
			j++;
		}
			/*printf("%s",k);*/
		else
		{
			k[j]='\0';
			printf("%s\n",k);
			j=0;
		}
	
	}
}
