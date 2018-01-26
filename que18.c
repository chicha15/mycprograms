#include <stdio.h>
main()
{
	void fun(char*);
	char *s;
	s=(char*)malloc (1000);
	/*s=malloc(1000*sizeof(char));*/
	printf("enter the string\n");
	fun(s);
	printf("%s",s);
}
void fun(char *k)
{
	scanf("%[^\n]",k);
}