#include<stdio.h>
#include<string.h>
 main()
{
   int i,j;
   char str[50][50],temp[50];
   puts("Enter Strings one by one: ");
   for(i=0;i<=20;i++)
      gets(str[i]);
   for(i=0;i<=20;i++)
      for(j=i+1;j<=20;j++)
	   {
         if(strcmp(str[i],str[j])>0)
			 {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Order of Sorted Strings:");
   for(i=0;i<=20;i++)
      puts(str[i]);
}