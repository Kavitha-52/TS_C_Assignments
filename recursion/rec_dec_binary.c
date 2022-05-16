//convert a decimal number to binary using recursion

#include<stdio.h>
int dec_bin(int n);
int main()
{
	int n,res;
	printf("Enter number:\n");
	scanf("%d",&n);
	res=dec_bin(n);
	printf("%d",res);
	
	
}
int dec_bin(int n)
{
	int result;
	if(n!=0)
	{
		result = (n%2+10*dec_bin(n/2));
		return result;
	}
	
}
