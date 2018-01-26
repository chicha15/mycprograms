#include <stdio.h>
main()
{
	int i=0;
	int nw=0;
	int j,k=0;
	char name[]="he is a very nice boy";
	char (*words)[100];
	while(name[i]!='\0')
	{
		if(name[i]==' '||name[i]=='\t'||name[i]=='\n')
			nw++;
		i++;
	}
	nw++;
	/*printf("%d",nw);*/
	(char*)*words=(char*)malloc(100*nw*sizeof(char));
	for(i=0;i<nw;i++)
                     	{
		j=0;
	while(1)
	{
		if(name[k]!=' '&&name[k]!='\t'&&name[k]!='\n')
		{
			*(*(words+i)+j)=name[k];
			/*printf("%c",*(*(words+i)+j));*/
			k++;
			j++;
		}
		else
		{
			*(*(words+i)+j)='\0';
			k++;
			printf("%s\n",*(words+i));
			break;
		}	
	}
	}
for(i=1;i<nw;i=i+2)
{
	printf("%s",*(words+i));
	printf("%s",*(words+(i-1)));
}
}

