#include<stdio.h>
 main()
{
int a[20],i,n,min,max, sl=0,ll=0;
printf("Enter array size\n");
scanf("%d",&n);
printf("Enter any %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
min = a[0];
max = a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min = a[i];
sl=i;
} 
if(a[i]>max)
{
max = a[i];
ll=i;
}
}
printf("Minimum is %d\nMaximum is %d\n",min,max);
a[sl]=max;
a[ll]=min;

for(i=0;i<n;i++)
printf("%d\n",a[i]);
}