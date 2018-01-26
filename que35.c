
		
#include <stdio.h>

void readArray(int arr[], int size) 
{ 
    int i =0; 
 
    printf("Enter elements : \n"); 
 
    for(i=0; i < size; i++) 
    { 
        printf("Enter arr[%d] : ",i); 
        scanf("%d",&arr[i]); 
    } 
} 
 
void printArray(int arr[],int size) 
{ 
    int i =0; 
 
    printf("\nElements are : "); 
 
    for(i=0; i < size; i++) 
    { 
        printf("\narr[%d] : %d",i,arr[i]); 
    } 
    printf("\n"); 
} 
 
void merge(int arr1[], int size1, int arr2[], int size2, int arr3[]) 
{ 
    int i = 0,j=0 ; 
 
    for(i=0; i < size1; i++) 
        arr3[i] = arr1[i]; 
 
    for(i=10,j=0;i < size2+10; i++,j++) 
        arr3[i] = arr2[j]; 
} 
 
main() 
{ 
    int arr1[10]; 
    int arr2[10]; 
    int arr3[20]; 
 
    readArray(arr1,10); 
    readArray(arr2,10); 
    merge(arr1, 10, arr2, 10, arr3); 
    printArray(arr3,20); 
 
 
} 