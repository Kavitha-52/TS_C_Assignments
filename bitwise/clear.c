//Write a C program to clear nth bit of a number.

#include<stdio.h>
#include"clear.h"

int main()
{
int num,pos;
printf("Enter a number: ");
scanf("%d",&num);
printf("Enter a position: ");
scanf("%d",&pos);
clear_bit(num,pos);
return 0;
}
