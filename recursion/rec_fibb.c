//print fibanocci series using recursion

#include<stdio.h>
void fib(int n)
{
	static int n1=0,n2=1,n3,result;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\t",n3);
		fib(n-1);
	}
}
int main()
{
	int n1=0,n2=1,n3,n,res;
	printf("Enter a number:\n"); 
	scanf("%d",&n);
	printf("fibonacci series:%d\t%d\t",n1,n2);
	fib(n-2);
	return 0;
}
