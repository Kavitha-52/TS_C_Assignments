#include<stdio.h>
int main()
{
int i,j,a[3][3]={1,2,3,4,5,6,7,8,9};
int *p;
printf("enter the elements of 2d array:\n");
for(i=0;i<3;i++)
{
scanf("%d",&a[i][j]);
}

p=&a[0][0]; //base address is assign to a pointer
//p=a;
printf("element of 2d array are:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",*(p+i*3+j));
}
printf("\n");
}
return 0;
}
