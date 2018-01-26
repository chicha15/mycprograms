#include <stdio.h>
struct data
{
	int accno[100];
	char name[50];
	int bal[100];
};
main()
{
/*int s=0;*/
int i;
/*scanf("%d",&s);
printf("%d",s);*/
struct data a[50];
for(i=0;i<50;i++)
	{
	printf("give the names");
	scanf("%s",a[i].name);
printf("%s",a[i].name);
printf("the balance is");
scanf("%d",&a[i].bal);
printf("%d",a[i].bal);
	}
}
if(a[i].bal<=100)
printf("")