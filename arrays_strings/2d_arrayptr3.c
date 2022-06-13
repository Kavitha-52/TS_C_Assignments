#include<stdio.h>
int main()
{
//2d array
int a[3][4]={
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}
};
int
ROW=3,
COL=4,
i,j;
//pointer
int *ptr=&a[0][0];//ptr pointing to array
for(i=0;i<ROW;i++)
{
for(j=0;j<COL;j++)
{
printf("%d",*(ptr+i+COL+j));
}
printf("\n");
}
return 0;
}
