#include <stdio.h>

main()
{
	int a[5];
	int i;
	int option=0;
	int l=0,s=0,sum=0,avg=0;
	
	printf("enter five elements");
	for(i=0;i<5;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	printf("menu\n");
	printf("1.largest");
	printf("2.smallest");
	printf("3.sum");
	printf("4.average");
	printf("choose your option");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			 l=a[0];
  for(i=1;i<5;i++)
	  {
      if(l<a[i])
           l=a[i];
  }
  printf("largest element: %d",l);
		case 2:
			s=a[0];
  for(i=1;i<5;i++)
	  {
      if(s>a[i])
           s=a[i];
	 }
  printf("smallest element: %d",s); 
		case 3:
			for(i=0;i<5;i++)
			{
				sum=sum+a[i];
			}
				printf("sum is : %d",sum);
			
		case 4:
		for(i=0;i<5;i++)
			{
		avg = (float)sum/5;
			}
			printf("the average is :%d",avg);
	}
}



