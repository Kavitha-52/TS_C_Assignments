//calculate area and circumference of a circle.

#include<stdio.h>
int main()
{
	int r;
	float area,circumference;
	float pi=3.14;
	printf("Enter the radius:");
	scanf("%d",&r);
	area=pi*r*r;
        circumference=2*pi*r;
	printf("area:%f\n",area);
	printf("perimeter:%f\n",circumference);
	return 0;
}
