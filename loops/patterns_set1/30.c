/*

#include<stdio.h>
long fact(int);

int main()
{
   int i, j;
   for (i=0;i<5;i++)
   {
      for(j=0;j<=i;j++)
      {
         printf("%ld ",fact(i)/(fact(j)*fact(i-j)));
      }
      printf("\n");
   }
   return 0;
}

long fact(int n)
{
    int i;
    long f = 1;
    for(i=1;i<=n;i++)
      f = f*i;
    return f;
}

1
1 1
1 2 1
1 3 3 1 
1 4 6 4 1

*/

