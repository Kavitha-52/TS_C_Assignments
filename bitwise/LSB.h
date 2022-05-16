#include<stdio.h>
void lsb(int num)
{
if(num&1)
printf("LSB of %d is set\n",num);
else 
printf("LSB of %d is unset \n",num);
}
