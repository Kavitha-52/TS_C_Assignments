#include <stdio.h>
struct student 
{
          	 int id;
 char name[20];
 float marks;
};

void func(struct student *stu);
int main() 
{
struct student stu;
printf("Enter student name,student id,student marks:\n");
scanf("%s %d %f",stu.name,&stu.id,&stu.marks);
func(&stu);
return 0;
}
void func(struct student *stu)
{
       printf("ID:%d\n",stu->id);
          printf("Name:%s\n",stu->name);
          printf("Marks:%f\n",stu->marks);
}
