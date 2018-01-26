#include <stdio.h>
main()
{
	int *p;
	int size=100;
	p=getmyarray(size);
}
int *getmyarray(int s)
{
	static int *q;
	q=malloc(s*2);
	return q;
}