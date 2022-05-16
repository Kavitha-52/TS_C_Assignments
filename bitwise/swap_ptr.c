#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("After swapping %d %d\n",*a,*b);
}
int main()
{
	int a,b;
	printf("Enter a,b\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	
}
