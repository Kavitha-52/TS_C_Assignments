#include<stdio.h>
# define BITS 4
void nth_bit(int num)
{
int nth_bit;
msb=(1<<BITS-1);
if(num & nth_bit)
printf("nth bit of %d is set\n",num);
else 
printf(" nth of %d is unset \n",num);
}
