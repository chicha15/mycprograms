#include <stdio.h>
main()
{
	int days=0;
	int fine=0;
	printf("give the no. of days the book is give late\n");
	scanf("%d",days);
	if(days>=5&&days<6)
	{
		printf("fine is");
	fine=days*(float)5/10;
	printf("%d",fine);
	}
	if(days>=6&&days<=10)
		{
		printf("fine is");
	fine=days*(float)15/10;
	printf("%d",fine);
		}
	if(days>10&&days<=30)
	{
		printf("fine is");
	fine=days*(float)55/10;
	printf("%d",fine);
	}
		else
	{
			printf("membership of the person is cancelled");
	}
}