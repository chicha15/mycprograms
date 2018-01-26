#include <stdio.h>
main()
{
	int i,n;
	int arr[100];
	printf("enter total no. of elements");
	scanf("%d",&n);
	printf("\n");
	i=0;
while(i<n)
	{
		printf("enter no.%d",i+1);
		scanf("%d",&arr[i]);
		i++;
	}
	i=1;
	while(i<n)
	{
		if(arr[0]<arr[i])
			arr[0]=arr[i];
		i++;
	}
	printf("largest element=%d",arr[0]);
}
	