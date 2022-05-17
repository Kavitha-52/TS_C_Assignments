#include<stdio.h>
int main()
{
    int r=5,c=5;
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c+(2*i);j++)
        {
            if((2*i)>j)
            printf(" ");
            else 
            {
                printf("* ");
            }

        }
	printf("\n");
    }
}


/*output 


* * * * * 
  * * * * * 
    * * * * * 
      * * * * * 
        * * * * * 


*/
