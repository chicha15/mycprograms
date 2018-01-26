#include <stdio.h>

void main()
{
	int arr[] = {12, 11, 13, 5, 6};
      greater than k int n = sizeof(arr)/sizeof(arr[0]);
    void ist(int [], int );
   void pa(int [], int); 
	ist(arr, n);
    pa(arr, n);
}

void ist(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
       tiadon heey, to one opsi
          of their current position *a/
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

void pa(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
       printf("\n");
}