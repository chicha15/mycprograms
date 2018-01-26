#include <stdio.h>
#include <string.h>
 

 
main() 
	{
	void copystring(char [], char []);
   char s[1000], d[1000];
   printf("Input a string\n");
   gets(s);
   copystring(d, s);
   printf("Source string: %s\n", s);
   printf("Destination string:%s\n", d);
}
void copystring(char d[], char s[]) 
	{
   int c = 0;
   while (s[c] != '\0')
	   {
      d[c] = s[c];
      c++;
   }
   d[c] = '\0';
}