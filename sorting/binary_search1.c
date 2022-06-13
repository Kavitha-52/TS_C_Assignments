#include<stdio.h>
int binary_search(int [],int,int);
#define N 5
int main()
{
	int arr[N],i,data;
	printf("enter the array elements:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements are:");
	for(i=0;i<N;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nenter data to find:\n");
	scanf("%d",&data);
	printf(" element found=%d\n",binary_search(arr,N,data));
       
}

int binary_search(int a[],int n,int data)
{
	int l,r,mid;
	l=0,r=n-1;
	while(l<r)

	{
		mid =(l+r)/2;
		if(data==a[mid])
			return mid;
		else if(data<a[mid])
			r=mid-1;
         		return r;

		else
			l=mid+1;
	                return l;
	 }
	return-1;
}
