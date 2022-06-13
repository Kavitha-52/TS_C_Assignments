#include <stdio.h>
struct stu
{
    char name[20];
    int id;
    int marks;
};
int main()
{
    struct stu s[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter student %d name,id,marks\n",i+1);
        scanf("%s %d %d",s[i].name,&s[i].id,&s[i].marks);
    }
    printf("\n");
    for(i=0;i<2;i++)
    {
        printf("Name: %s\n",s[i].name);
        printf("Roll no: %d\n",s[i].id);
        printf("Marks: %d\n",s[i].marks);
    }
}
