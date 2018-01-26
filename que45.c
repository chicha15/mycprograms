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
	int j,k=0;
	int h=0;
	int u=0;
	int count=1;
	int flag;
	char name[100];
	char *words[110];
	printf("give the para");
	scanf("%[^\t]s",name);
	/*printf("%s",name);*/
	while(name[i]!='\0')
	{
		if(name[i]==' '||name[i]=='\t'||name[i]=='\n')
			nw++;
		i++;
	}
	nw++;
/*	printf("%d\n",nw);*/
for(i=0;i<nw;i++)
	words[i]=(char*)malloc(50*sizeof(char));


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
		if(*(words+i)!=NULL)
			{
					
				for(j=i+1;j<nw;j++)
					{
						if(strcmp(*(words+i),*(words+j))==0)
							{
								flag=1;
								count++;
							*(words+j)=NULL;
							/*if(*(words+j)==NULL);*/
								
							h++;
							u=nw-h;
						}	
					} 		
				printf("%s----%d\n",*(words+i), count);
			
			}
	}
	/*if(*(words+i)!=NULL)
	{
		printf("%d",nw);
	}*/
	if(flag==1)
	{
	printf("%d",u);	
}
else
	{
	printf("%d",nw);
	}
}