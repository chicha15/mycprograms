#include <stdio.h>
#include<malloc.h>
main()
{
    int i;
	int *a,*b,*c,*o;
	int *choice(int*,int*,int*);
	a=(int*)malloc(6);
	*(a+0)=1;
	*(a+1)=2;
	*(a+2)=3;
	b=(int*)malloc(6);
	*(b+0)=10;
	*(b+1)=20;
	*(b+2)=30;
	c=(int*)malloc(6);
	*(c+0)=100;
	*(c+1)=200;
	*(c+2)=300;
	o=choice(a,b,c);
	for(i=0;i<3;i++)
	{
		printf("%d",*(o+i));
	}
}
	int *choice(int *p,int *q,int *r)
	{

		return p;
	}

