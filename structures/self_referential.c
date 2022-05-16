#include<stdio.h>
#include<stdlib.h>
struct self
{
	int i;
	char c;
	struct self *ptr;
};
int main()
{
	struct self s1,s2;
	s1.i=65;
	s1.c='A';
	s1.ptr=NULL;
	s2.i=66;
	s2.c='B';
	s2.ptr=NULL;
	s1.ptr = &s2;
	printf("%d %c\n",s1.ptr->i,s1.ptr->c);
}
