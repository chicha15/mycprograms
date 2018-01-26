#include <stdio.h>
main()
{
	int mon,days,year;
	printf("enter days\n");
	scanf("%d",&days);
	printf("give the year\n");
	scanf("%d",&year);
	mon=days/30;
	days=days%30;
	printf("%d%d%d",days,mon,year);
}