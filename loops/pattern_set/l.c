#include<stdio.h>
int main()
{
	int r=10,c=10;
	int i,j;
	for(i=0;i<r;i++,printf("\n"))
	{
		for(j=0;j<c+i;j++)
		{
			if(i>=j)
			printf(" ");
			else 
			{
				
			//	printf("*");
				if(j%2==0)
					printf(" ");
				else
					printf("*");
				
			}

		}
	}
}
