//program to find maximum and minimum element in an array. [ use any sorting algorithm along with time complexity details ] 

#include<stdio.h>
void arraysort(int (*a)[],int n); 
void main()
{
	int a[20],n,i;
	printf("Enter number of element to array:\n"); 
	scanf("%d",&n);
	printf("Enter elements to array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	arraysort(&a,n);
	printf("After sorting:\n"); 
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}


void arraysort(int (*a)[],int n)
{
	int i,j,t; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if((*a)[j] > (*a)[j+1])
			{
				t=(*a)[j]; 
				(*a)[j]=(*a)[j+1]; 
				(*a)[j+1]=t;
			}
		}
	}
}
