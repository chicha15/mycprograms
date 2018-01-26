#include <stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
struct student
{
	char name[50];
	int rollno;
	struct date dob;
};
main()
{
struct student *p;
struct student x;
p=&x;
	scanf("%s",p->name);
	scanf("%d",&p->rollno);
	scanf("%d",&p->dob.day);
	scanf("%d",&p->dob.month);
	scanf("%d",&p->dob.year);
	printf("%s",p->name);
	printf("%d",p->rollno);
	printf("%d",p->dob.day);
	printf("%d",p->dob.month);
	printf("%d",p->dob.year);
}