#include <stdio.h>
main()
{
	FILE *fp;
	char c;
	if(fp=fopen("s.dat","r")==NULL);
	{
	printf("file can not be opened");
	}
	else
	do
	{
		put(c=getc(fp));
	}
	while(c!='\n');
	/*fclose(fp);*/
}
	