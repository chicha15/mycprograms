
#include <stdio.h>
main()
{
   char str1[50], str2[50], i, j;
   printf("\nEnter first string: ");
   gets(str1);
   printf("\nEnter second string: ");
   gets(str2);
/* i=strlen(str1);*/
  for(i=0; str1[i]!='\0'; ++i); 
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
  
   str1[i]='\0';
   printf("\nrequired string: %s",str1);
}                                                                                                                                    