//rogram to copy one array to another using pointers.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	//char *ptr[]={"apple","banana","orange"};
	char *p[5];
	int i,j=0;
	
	for(i=0;i<3;i++)
	{
		p[i]=malloc(sizeof(char *)*10);
		printf("Enter element:\n");
		scanf("%s",p[i]);
		
	}
		for(i=0;i<3;i++)
		{
			printf("%s\n",p[i]);
		}
		
		
	
	
}
