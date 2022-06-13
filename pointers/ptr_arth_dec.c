#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int *p,*q;
p=a;
printf("%d %d %d %d\n",*p,(*p)++,*p++,*++p);  //(*p)++ = *p++ both are same
q=p;
printf("%d\n",*q);
p=p+1;
q=p;
printf("%d\n",*q);
}
