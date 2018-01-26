#include <stdio.h>
main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if((i%3==0)&&(i%5==0))
			printf("nitwgl");
		else
			if(i%3==0)
			printf("nit");
		else
			if(i%5==  0)
			printf("wgl");
		else
			printf("%d",i);
	}
}