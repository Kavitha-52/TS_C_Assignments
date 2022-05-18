#include<stdio.h>
int main()
{
	int k=0;
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<=i;j++)
		{
			k=i*j;
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}


/*


1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25 

*/
