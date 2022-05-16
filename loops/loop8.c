#include<stdio.h>
int main()
{
int i,j,n,k;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
printf("*");
printf("\n");
}
for(i=1;i<=5;i++)
 {
   for(j=0;j<i;j++)
   {
    printf(" ");
   }
 for(k=i;k<=4;k++)
  {
   printf("*");
  }
   printf("\n");
}
return 0;
}
