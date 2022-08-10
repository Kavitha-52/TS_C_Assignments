#include<stdio.h>
int main()
{
int a[20],i,n,x,j;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the array elements: \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\nThe array elements before swapping: \n");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
printf("\n");
j=n-1;
for(i=0;i<n/2;i++)
{
	x=a[i];
	a[i]=a[j];
	a[j]=x;
	j=j-1;
}
printf("\nThe array elements after swapping: \n");
for(i=0;i<n;i++)
        printf("%d ",a[i]);
	printf("\n");
  return 0;
}
