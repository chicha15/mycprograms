#include <stdio.h>
main()
{
	int x[3][4];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
	{
		printf("give the values for (%d,%d)element",i,j);
		scanf("%d",&x[i][j]);
	}

		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
		{
				printf("%d",x[i][j]);
		}
}