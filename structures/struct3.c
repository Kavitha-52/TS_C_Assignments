#include<stdio.h>
struct student
{
    char name[20];
    int ID;
    int marks;
};

void fun(char name[],int ID,int marks);

int main()
{
    struct student stu;
    printf("Enter student name, Id, marks:\n");
    scanf("%s %d %d",stu.name,&stu.ID,&stu.marks);
    fun(stu.name, stu.ID, stu.marks);
    return 0;
}

void fun(char name[],int ID,int marks)
{
    printf("Name: %s\n",name);
    printf("Roll no: %d\n",ID);
    printf("Marks: %d\n",marks);
}
