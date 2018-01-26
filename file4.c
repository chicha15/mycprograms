#include <stdio.h>
main()
{
	FILE *fp;
	char name[50];
	int acno=0,i;
	fp=fopen("accounts.info","r");
	for(i=0;i<5;i++)
	{
		fscanf(fp,"%s\n",name);
		printf("%s\n",name);
		fscanf(fp,"%d\n",&acno);
		printf("%d\n",acno);
	}
}