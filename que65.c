#include <stdio.h>
main()
{
	int a[50];
	int b[50];
	int i;
	int num=0;
	int sum=0;
	printf("give no of elements in the array");
	scanf("%d",&num);
	printf("give values for the array\n");
	for(i=0;i<num-1;i++)
				{
		scanf("%d\n",&a[i]);
				}
			for(i=0;i<num;i++)
						{
					printf("%d\n",a[i]);
						}
							for(i=0;i<num;i++)
									{
										b[i]=a[i]+sum;
										sum=b[i];
									}
										for(i=0;i<num;i++)
											printf("%d",b[i]);
}