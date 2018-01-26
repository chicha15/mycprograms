#include <stdio.h>
main()
{
	int a,b,c,d,e;
	int robo1(int,int);
	printf("give value for a");
	scanf("%d",&a);
	printf("give value for b");
	scanf("%d",&b);
	printf("give value for c");
	scanf("%d",&c);
/*	robo1(a,b);
	d=robo1(a,b);
	e=robo1(d,c);*/
/*e= robo1(a,robo1(b,c));*/

	printf("%d",robo1(a,robo1(b,c)));
}
int robo1(int a,int b)
{
	/*int large;
	if(a>b)
		large=a;
	else
		large=b;
	return large;*/

	
	/*if(a>b)
		return a;
	else
		return b;*/


	/*	int large;
		large=(a>b)?a:b;
		return large;*/

		return (a>b)?a:b;
}
		