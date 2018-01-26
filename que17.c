#include <stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char s[100];
	char k[100];
	int l;
	int i;
	int m;
	int n;
	int j=0;
	printf("enter the string");
	scanf("%[^\n]",s);
	l=strlen(s);
	i=l-1;
	while(i>=0)
	{
		if(s[i]!=' '&& i!=0)
		{
			k[j]=s[i];
			j++;
		}
		else
		{
			if(i==0)
				k[j++]=s[i];
				
			k[j]='\0';
			m=strlen(k);
			for(n=m-1;n>=0;n--)
				printf("%c",k[n]);
			j=0;
		}
		i--;
	
	}
} 
