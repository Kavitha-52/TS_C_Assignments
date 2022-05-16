//Use .h files and fns in programs 

//Write a C program to set nth bit of a number.

#include<stdio.h>
#include"set.h"
int main()
{
int num,pos;
printf("Enter a number: ");
scanf("%d",&num);
printf("Enter a position: ");
scanf("%d",&pos);
set_bit(num,pos);
return 0;
}
