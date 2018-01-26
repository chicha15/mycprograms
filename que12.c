#include <stdio.h>
void swap(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
main()
{
	int num1,num2;
	printf("enter the first no.");
	scanf("%d",&num1);
	printf("enter the second no.");
	scanf("%d",&num2);
	swap(&num1,&num2);
	printf("first number%d",num1);
	printf("second number%d",num2);
}
