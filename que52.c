#include <stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
struct stu
{
	char name[50];
	int rollno;
	struct date dob;
};
main()
{
	struct stu a;
	scanf("%s",a.name);
	scanf("%d",&a.rollno);
	scanf("%d",&a.dob.day);
	scanf("%d",&a.dob.month);
	scanf("%d",&a.dob.year);
	printf("%s\n",a.name);
	printf("%d\n",a.rollno);
	printf("%d-",a.dob.day);
	printf("%d-",a.dob.month);
	printf("%d",a.dob.year);
}