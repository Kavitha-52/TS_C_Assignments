#include<stdio.h>
int main()
{
int a[5]={1,2,3,9,4};
int *p=&a[0];
printf("value=%d\n",*p); //1
printf("addess of element is :%p\n",p);//base address
p=p+2;//1000+2(4)=1008
printf(" value is =%d\n",*p);
printf("address of element is=%p\n",p);
}
