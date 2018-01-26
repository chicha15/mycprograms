#include <stdio.h>
main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if((i%3==0)&&(i%5==0))
			printf("nitwgl\n");
		else
			if(i%3==0)
			printf("nit\n");
		else
			if(i%5==  0)
			printf("wgl\n");
		else
			printf("%d\n",i);
	}
}