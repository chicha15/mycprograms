#include <stdio.h>
#include<string.h>
#include<malloc.h>
/*You can understand in this way:
array points to an 3 rows with 5 columns each
when you do array+1, row changes so you go to 1st row. You should try accessing with *(array + 1).
when you do *(array), you point to 0th row and *(array)+1 moves ahead in column so element is array[0][1]*/


main()
{
	int i=0;
	int nw=0;
	int l,j,k=0;
	int count=1;
	char name[]="he he is is a very very very nice boy boy boy";
	char (*words)[60];
	while(name[i]!='\0')
	{
		if(name[i]==' '||name[i]=='\t'||name[i]=='\n')
			nw++;
		i++;
	}
	nw++;
/*	printf("%d\n",nw);*/

(char*) *words=malloc(nw*60);

	for(i=0;i<nw;i++)
           {
		j=0;
	while(1)
	{
		if(name[k]!=' '&&name[k]!='\t'&&name[k]!='\n')
		{
			*(*(words+i)+j)=name[k];
			/*printf("%c",name[k]);*/

			k++;
			j++;
		}
		else
		{
			*(*(words+i)+j)='\0';
			k++;
			printf("%s\n",(words[i]));
			break;
		}
	}
	}
for(i=0;i<nw;i++)
	{
		count=1;
			for(j=i+1;j<nw;j++)
					{
						if(strcmp(*(words+i),*(words+j))==0)
							{
							     count++;
								for(l=j;l<nw;l++)
									strcpy(*(words+l),*(words+(l+1)));
							    nw-=1;
								j--;
							}
					}
				printf("%s----%d\n",*(words+i), count);

	}

}
