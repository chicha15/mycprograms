
#include<stdio.h>
int Length(char str[]);
main()
	{
   char str[100];
   int length;
   printf("Enter the String : ");
   gets(str);
   length = Length(str);
   printf("Length of the String is : %d", length);
   
}
int Length(char str[])
	{
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}