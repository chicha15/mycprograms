#include <stdio.h>
main()
{
	FILE *fp;
	char name[50];
	int acno,i;
	fp=fopen("accounts.info","w");
	for(i=0;i<5;i++)
	{
		printf("name");scanf("%s",name);
		printf("accno");scanf("%d",&acno);
		fprintf(fp,"%s\n",name);
		fprintf(fp,"%d\n",acno);
	}
}