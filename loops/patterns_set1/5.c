#include<stdio.h>
int main()
{
  int i,j,k;
 for(i=1;i<6;i++)
  {
   k=i+1;
  for(j=0;j<i;j++)
   {
	k=k-1;
	printf("%d ",k);
    }
  printf("\n");
 }
 return 0;
}
