#include <stdio.h>
main()
{
	int i,j,l;
char str[100];
printf("Enter the string\n");
scanf("%s", &str[100]);
l=strlen(str);
for(i=l-1; i>=0; i--)
{
	if(str[i]==' ')
		for(j=i+1; j<l; j++)
	{
    printf("%c",str[j]);
    printf(" ");
    l=i;
    
    if(i==0) 
    { 
		printf(" "); 
        for(j=0; j<l; j++) 
            printf("%c",str[j]); 
    } 
} 
}
}