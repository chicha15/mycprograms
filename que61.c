#include<stdio.h>
#include<time.h>
#include<dos.h>
struct dates
{
	int day;
	int month;
	int year;
};
struct bankdeposit
{
	int amt;
	int tenure;
	struct dates dob;
	struct dates dod;
};
/*struct date d;
 getdate(&d);*/
main()
{
	struct date d;
	struct bankdeposit a;
	int age=0;
	int amount=0;
getdate(&d);
printf("date of birth of person is\n");
printf("enter day,month,year of the person");
scanf("%d",&a.dob.day);
scanf("%d",&a.dob.month);
scanf("%d",&a.dob.year);
printf("%d-",a.dob.day);
printf("%d-",a.dob.month);
printf("%d",a.dob.year);
printf("date of deposit in the bank\n");
printf("enter day,month,year of the person");
scanf("%d",&a.dod.day);
scanf("%d",&a.dod.month);
scanf("%d",&a.dod.year);
printf("%d-",a.dod.day);
printf("%d-",a.dod.month);
printf("%d",a.dod.year);
printf("amount deposited in the bank");
scanf("%d",&a.amt);
printf("%d",a.amt);
printf("no. of years deposit to be maintained");
scanf("%d",&a.tenure);
printf("%d",a.tenure);
printf("present age of the person is");
age=d.da_year-a.dob.year;
printf("%d",age);
if(age>=60)
	{
	
	printf("amount received after date of maturity is");
	amount=a.amt*a.tenure*(float)9/100;
	printf("%d",amount);
	}
	else
	{
	amount=a.amt*a.tenure*(float)8/100;
	printf("%d",amount);
	}
}






