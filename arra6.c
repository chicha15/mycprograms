
#include <stdio.h>
main()
{
	int i,j,n,sum,average;
	int arr[100][6];
	printf("enter the the total no. of elements");
	scanf("%d",&n);
	for(j=0;j<6;j++)
	{
		sum=0;
		for(i=0;i<100;i++)
			sum=sum+arr[i][j];
		average=sum/100;
		printf("%d",average);
	}
}
