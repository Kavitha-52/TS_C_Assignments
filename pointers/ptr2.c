#include<stdio.h>
int main()
{
int a=10,b=20,c;
int *p,*q;
p=&a;
q=p;
printf("a=%d %d %d",a,*p,*q);
}
