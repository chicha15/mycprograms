#include <stdio.h>
 main()
	 {
    char inputstring[100];
    int i,l;
	/*int n;*/
	/*printf("give the lenght of the string");
	scanf("%d",&  n);*/
	printf("Enter a String\n");
		 gets(inputstring);  
		printf("string: ");
		puts(inputstring);
		l=strlen(inputstring);
		for(i=0;i<l;i=i+2)
		 {
		printf("required string");
		/*gets(inputstring);*/
		strupr(inputstring[i]);
		puts(inputstring);
}
	 }