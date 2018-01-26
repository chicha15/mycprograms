#include<stdio.h>
int Length(char *);
main()
	{
   char *str;
	int l;
   str=(char*)malloc(1000);
   printf("Enter the String : ");
   gets(str);
   l = Length(str);
   printf("Length of the String is : %d", l);
   
}
int Length(char *str)
	{
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}