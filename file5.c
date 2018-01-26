#include <stdio.h>
typedef struct 
{
	int day;
	int month;
	int year;
}date;
typedef struct 
{
	char name[50];
	int acno;
	date today;
	float balance;
}record;
FILE *fpt;
main()
{
	record customer;
	int flag=1;
	record readscreen(record customer);
	void writefile(record customer);
	fpt=fopen("records.dat","w");
	printf("please enters todays date");
	scanf("%d",&customer.today.day);
	scanf("%d",&customer.today.month);
	scanf("%d",&customer.today.year);
	customer.acno=0;
	customer.balance=0;
	while(flag){
		printf("enter name(enter end when finished)");
		fflush(stdin);
		scanf("%[^\n]",customer.name);
		if(strcmp(customer.name,"end")==0)
			break;
		customer=readscreen(customer);
		writefile(customer);
	}
		fclose(fpt);
}
	record readscreen(record customer)
	{
		printf("account no.\t");
		scanf("%d",&customer.acno);
		printf("balance\t");
		scanf("%f",&customer.balance);
		return(customer);
	}
	void writefile(record customer)
	{
		fprintf(fpt,"%s\n",customer.name);
		fprintf(fpt,"%d\n",customer.acno);
		fprintf(fpt,"%d\n",customer.today.day);
		fprintf(fpt,"%d\n",customer.today.month);
		fprintf(fpt,"%d\n",customer.today.year);
		fprintf(fpt,"%f\n",customer.balance);
	}