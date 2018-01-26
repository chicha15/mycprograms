#include <stdio.h>
main()
{
	int i,n;
	int arr[100];
	printf("enter total no. of elements");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter no.%d",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[0]<arr[i])
			arr[0]=arr[i];
	}
	printf("largest element=%d",arr[0]);
}
	