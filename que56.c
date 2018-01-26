#include<stdio.h> 
 main()
{
    int i,stars,j;
    int space=0;
	printf("how many stars");
	scanf("%d",&stars);
	space=stars;
     for(i=0;i< stars;i++)
    {
		
       for(j=0;j< space;j++)
        printf(" ");
		for(j=0;j<=i;j++)
          printf("* ");
         printf("\n");
		 space--;
          
    }
}