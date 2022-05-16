
#include<stdio.h>  
struct student  
{  
    char name[20];  
    int id;  
    float marks;  
};  
void main()  
{  
    struct student s1,s2,s3;
    printf("Enter student names\n");
    scanf("%s %s %s",s1.name,s2.name,s3.name);
    printf("Enter student id\n");
    scanf("%d %d %d",&s1.id,&s2.id,&s3.id);
    printf("Enter student marks\n");
    scanf("%f %f %f",&s1.marks,&s2.marks,&s3.marks);
    printf("List of students:\n");
    printf("Name:%s\nID:%d\nMarks:%f\n",s1.name,s1.id,s1.marks);  
    printf("Name:%s\nID:%d\nMarks:%f\n",s2.name,s2.id,s2.marks);  
    printf("Name:%s\nID:%d\nMarks:%f\n",s3.name,s3.id,s3.marks);  
}

