#include <stdio.h>
main()
{
	int product=1,i=0,x,y;
	printf("give value for x");
	scanf("%d",&x);
	printf("give value for y");
	scanf("%d",&y);
	while(i<y)
	{
		product=product*x;
		i++;
	}
		printf("%d",product);
}