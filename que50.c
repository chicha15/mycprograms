#include <stdio.h>
main()
{
	char a[100];
	char b[100];
	char c[100];
	int i;
	int j;
	int k;
	int l;
	int d=0;
	printf("enter the string");
	scanf("%[^\n]",a);
	k=strlen(a);
	printf("enter the second string");
	fflush(stdin);
	scanf("%[^\n]",b);
	l=strlen(b);
	
	if(k==l)
	{
		j=0;
	for(i=0;i<strlen(a);i++)
	{
		c[j++]=a[i];
		c[j++]=b[i];
	}
	/*j++;*/
	c[j]='\0';
		printf("%s",c);
}
if(k>l)
	{
			j=0;
		d=k-l;
	for(i=0;i<l;i++)
	{
		c[j++]=a[i];
		c[j++]=b[i];
	}
	for(i=l,j=(2*l);i<(l+d);i++,j++)
		{
		c[j]=a[i];
		/*printf("%c",c[j]);*/
		}
	j++;
	c[j]='\0';
	/*	printf("\n%s",c);*/
	puts(c);
}
	if(k<l)
	{
		j=0;
		d=l-k;
	for(i=0;i<k;i++)
	{
		c[j++]=a[i];
		c[j++]=b[i];
	}
	for(i=k,j=(2*k);i<(k+d);i++,j++)
		{
		c[j]=b[i];
		}
	j++;
	c[j]='\0';
		printf("%s",c);
	}
}

		