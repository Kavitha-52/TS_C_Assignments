#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int id;
 //   struct student *ptr;
};

int main()
{
    struct student *s;

    s=(struct student *)malloc(sizeof(struct student));
    printf("Enter a name and rollnumber: ");
    scanf("%s%d",s->name,&s->id);
    printf("Name: %s\nRollNo: %d\n",s->name,s->id);
    return 0;
}
