#include<stdio.h>
int main()
{
int a[]={10,20,30,40,50,60,70,80};
int *p;
p=a;
printf("address of p=%p\n",p);
printf("value=%d\n",*p);
p+1;//it will increment of 4 bytes but it will not return to ptr
printf("address of p=%p\n",p);
printf("value=%d\n",*p);
p++;//p=p+1; it will increment and return to the ptr
printf("address of p=%p\n",p);
printf("value=%d\n",*p);//20

printf("value=%d\n",*(p++));//returns 20 after that increment so ptr pointing to next address
printf("value=%d\n",*p);//20
printf("address of p=%p\n",p);
printf("value=%d\n",*p);//30
printf("value=%d\n",*++p);//40
printf("value=%d %d %d\n",*p,*p++,*p++);
printf("value=%d\n",*p--);//60
printf("value=%d\n",*p);
printf("value=%d\n",*--p);
}
