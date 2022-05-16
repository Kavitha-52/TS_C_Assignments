//explain all storage classes scope.

#include<stdio.h>
static int a=20;
extern int k;
int main()
{
	auto int i=10;
	{
		auto int i=5;
		printf("%d\n",i);
	}
	{

		register char k='A';
		printf("%c\n",k);
	}
		printf("%d\n",i);
	printf("%d\n",a);
printf("%d\n",k);
}
