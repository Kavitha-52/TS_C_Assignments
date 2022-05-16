//Write a C program to toggle nth bit of a number.
#include<stdio.h>
#include"toggle.h"

int main()
{
int num,pos;
printf("Enter a number: ");
scanf("%d",&num);
printf("Enter a position: ");
scanf("%d",&pos);
toggle_bit(num,pos);
return 0;
}
