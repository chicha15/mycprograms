#include <stdio.h>
int factorial(unsigned int i) 
{

   if(i <= 1)
	   {
      return 1;
   }
   return i * factorial(i - 1);
}

main()
	{
   int i = 12;
   printf("Factorial of %d is %d\n", i, factorial(i));
} 