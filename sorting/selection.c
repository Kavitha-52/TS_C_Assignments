//WAP to implement selection sort 

/*  Time Complexity: O(n2) as there are two nested loops  */

#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selection_Sort(int arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n-1; i++)
	{
	  min = i;
	  for (j = i+1; j < n; j++)
	    if (arr[j] < arr[min])
	      min= j;
	    swap(&arr[min],&arr[i]);
	}
}

int main()
{
	int size;
	printf("Enter size of an array: ");
	scanf("%d",&size);
	int i,arr[size];
	printf("Enter an array:\n");
	for(i=0;i<size;i++)
	    scanf("%d",&arr[i]);
             
	selection_Sort(arr, size);

	printf("Sorted array: \n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

/*
output:
Enter size of an array: 5
Enter an array:
6
4
3
25
2
Sorted array: 
2 3 4 6 25 
*/


