//print factorial of a number using recursion

#include<stdio.h>
int factorial(int n)
{
	int result;
	if(n>=1)
	{
		result=n*factorial(n-1);
		return result;
	}
	else
		return 1;
		
	
}
int main()
{
	int n,res;
	printf("Enter a number:\n"); 
	scanf("%d",&n);
	res=factorial(n);
	printf("%d\n",res);
}
