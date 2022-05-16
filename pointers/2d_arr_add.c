//Write a C program to add 2D array using pointers.

#include<stdio.h>
#define n 5
void add(int (*arr1)[5],int (*arr2)[5])
{
	int sum[5],i;
	for(i=0;i<n;i++)
	{
	sum[i]=(*arr1)[i]+(*arr2)[i];
	}
	printf("sum of array elements are sum[is]:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",sum[i]);
	}
}
int main()
{
	int arr1[10],arr2[10],i;
	printf("Enter array elements of arr1[i]\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter array elements of arr2[i]\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	add(&arr1,&arr2);
	
}
