#include <stdio.h>
main()
{
	FILE *fp;
	char c;
	fp=fopen("sample.dat","w");
	do
	{
		putc(toupper(c=getchar()),fp);
	}
	while(c!='\n');
	fclose(fp);
}
	
	
	
		
