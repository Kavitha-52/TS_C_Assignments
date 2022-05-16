//Write a C program to swap two numbers using bitwise operator.

#include<stdio.h>
#include"swap.h"

int main()
{
int a,b;
printf("Enter a and b values: ");
scanf("%d %d",&a,&b);
swap(a,b);
return 0;
}
