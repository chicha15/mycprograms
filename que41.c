#include <stdio.h>
main()
{
	int d=0;
	int f=0;
	printf("give the no. of days the book is give late\n");
	scanf("%d",&d);
	if(d>=5&&d<6)
	{
		printf("fine is\n");
	f=d*(float)5/10;
	printf("%d",f);
	}
	if(d>=6&&d<=10)
		{
		printf("fine is\n");
	f=d*(float)15/10;
	printf("%d",f);
		}
	if(d>10&&d<=30)
	{
		printf("fine is\n");
	f=d*(float)55/10;
	printf("%d",f);
	}
		if(d>30)
	{
			printf("membership of the person is cancelled");
	}
}