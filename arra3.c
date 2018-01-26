 
 
#include <stdio.h>
#define maxsize 1000 
main()
{
    int arr[maxsize]; 
    int i, n;
    printf("Enter size of array");
    scanf("%d", &n);
    printf("Enter %d elements in the array",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("Elements in array are");
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
} 
