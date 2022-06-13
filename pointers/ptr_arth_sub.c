#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5},d;
int *p=&a[0];
int *q=&a[3];
printf("value=%d\n",*p); //1
printf("addess of element is :%p\n",p);//base address
printf("value=%d\n",*q); //4
printf("addess of element is :%p\n",q);
p=p+2;//1000+2(4)=1008
printf(" value is =%d\n",*p);//3
printf("address of element is=%p\n",p);//1008
printf("q-p=%ld\n",q-p);
printf("p-q=%ld\n",p-q);
}
