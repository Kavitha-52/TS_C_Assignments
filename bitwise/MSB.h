#include<stdio.h>
# define BITS 4
int msb(int num)
{
int msb;
msb=(1<<BITS-1);
if(num&msb)
printf("MSB of %d is set\n",num);
else 
printf(" MSB of %d is unset \n",num);
}
