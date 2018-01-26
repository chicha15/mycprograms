#include <stdio.h>
main()
{
 int i,sum,n,x;
 float avg;
 i=0;
 sum=0;
 printf("give value for n");
 scanf("%d",&n);
 do
 {
	 printf("give value for x");
	 scanf("%d",&x);
	 sum=sum+x;
	 i++;
 }
 while (i<n);
printf("%d",sum);
 avg=sum/n;
 printf("%d",avg);
}

