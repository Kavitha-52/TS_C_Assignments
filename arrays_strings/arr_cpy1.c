//program to copy all elements from an array to another array. - char / int - any one

#include<stdio.h>
#define n 5
void arr_cpy(int (arr1)[5])
{
	int i,arr2[5];
	for(i=0;i<n;i++)
	{
	arr2[i] = (arr1)[i];
	}
	printf("2nd array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr2[i]);
	}
}
int main()
{
	int arr1[5],i;
	printf("Enter the 1st Sarray elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	arr_cpy(arr1);
}
