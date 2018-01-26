#include <stdio.h>
#include<math.h>
main()
{
	int i;
	int sum=1;
	int product=0;
	int k;
	float x;
	int n;
	printf("give values for n");
	scanf("%d",&n);
		printf("give values for x");
		scanf("%d",&x);
	printf("give till how many terms");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{ 
		product=(product)*(n-i)*(float)x/(i+1);
		sum=sum+product;
		printf("%d",sum);
	}
}