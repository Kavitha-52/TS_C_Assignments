#include<stdio.h>
int main()
{
int a=10,b=20,c;
int *p,*q;
p=&a;
q=&b;
printf("value of a:%d\n",a);
printf("value of a :%d\n",*p);
printf("address of a =%p\n",&a);
printf("address of a =%p\n",p);
printf("address of a =%p\n",&p);
}
