#include<stdio.h>  
typedef struct employee
{
	int ID;
	int age;
	char name[100];
	char com[100];
}E;

int main()
{
	 E emp={0210355,22,"kavitha","ThunderSoft"};
	printf("Employee details:\n");
	printf("ID:%d\n",emp.ID);
	printf("Age:%d\n",emp.age);
	printf("Name:%s\n",emp.name);
	printf("Company_Name:%s\n",emp.com);
	return 0;
}
