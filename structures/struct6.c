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
    struct student s1,s2,s3;
   printf("enter 3 student names:\n");
    scanf("%s %s %s",s1.name,s2.name,s3.name);
    printf("enter 3 student ID:\n");
    scanf("%d %d %d",&s1.ID,&s2.ID,&s3.ID);
    printf("enter 3 student marks:\n");
    scanf("%d %d %d",&s1.marks,&s2.marks,&s3.marks);
    fun(s1.name, s1.ID, s1.marks);
    fun(s2.name, s2.ID, s2.marks);
    fun(s3.name, s3.ID, s3.marks);
    return 0;
}

void fun(char name[],int ID,int marks)
{
    printf("Name: %s\n",name);
    printf("Roll no: %d\n",ID);
    printf("Marks: %d\n",marks);
}
