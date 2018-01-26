#include <stdio.h>
#include<string.h>
main()
{
	char a[100],temp;
	/*char a{100};*/

	int i;int j=0;
	printf("enter the string");
	gets(a);
	i=0;
	j=strlen(a)-1;
	while(i<j)
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("%s",a[j]);
}
