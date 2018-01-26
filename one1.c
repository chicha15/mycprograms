#include <stdio.h>
#include<math.h>
main()
{
	int p,t;
	float r,si,amount,ci;
	
	printf("give principle,time and rate of intrest");
	scanf("%d%d%f",&p,&t,&r);
	si=p*t*r/100;
	printf("\nSimple interest = %f",si);
	amount=p*pow((1 +r/100),t);
	ci=amount-p;
	printf("\nCompound interest = %f",ci);
}