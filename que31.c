
#include <stdio.h>
#define R 4
#define C 4
void spiral(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;
 
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            printf("%d ", a[k][i]);
        }
        k++;
 
      
        for (i = k; i < m; ++i)
        {
            printf("%d ", a[i][n-1]);
        }
        n--;
 
     
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf("%d ", a[m-1][i]);
            }
            m--;
        } 
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                printf("%d ", a[i][l]);
            }
            l++;    
        }        
    }
}

int main()
{
    int a[R][C] = { {1,  2,  3,4},
        {5,6,7,8},
        {9,10,11,12},
		{13,14,15,16}   };
    spiral(R, C, a);
}