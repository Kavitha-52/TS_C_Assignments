
#include<stdio.h>
int main()
{
	int i = 0x87654321;
	char *p;
	p=(char *)&i;

	printf("%p\n",p);
	printf("%x\n",*p);
	
	printf("%p\n",p+1);
	printf("%x\n",*(p+1));
	
	if(*p)
		printf("little endian\n");
	else
		printf("Big endian\n");
}
