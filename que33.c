#include <stdio.h>
#include <math.h>
 
main ()
{
    int array[10][10];
    int i, j, m, n, sum = 0;
 
    printf("Enter the order of the matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter the n coefficients of the matrix \n");
	if(m==n)
	{
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        
            scanf("%d", &array[i][j]);
            
            }
    for (i = 0; i < m; ++i)
    {
        sum = sum + array[i][i];
    }
    printf("Trace of the matrix is = %d\n", sum);
}
else
	{
	printf(" please give a square matrix ");
	}
}