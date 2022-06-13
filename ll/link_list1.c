#include<stdio.h>
#include<stdlib.h>
typedef struct stu
{
        int id;
        char name[50];
        struct stu *next;
}STU;
STU * createnode();
void traversal(STU *);
STU *head=0,*l=0,*new=0;

int main()
{

char ch='y';
while(ch=='y')
{
new=createnode();
if(head==NULL)
head=new;
else
l->next=new;

 l=new;
printf("do u want to continue y/n:");
scanf(" %c",&ch);
}
printf("linked list created:\n");
traversal(head);

return 0;
}
 STU * createnode()
      {
   new=(STU *) malloc( sizeof(struct stu));
   new->next=NULL;
   printf("enter id and name:\n");
   scanf("%d%s",&(new->id),new->name);
   return new;
      }
void  traversal(STU * head)
{
STU *T=head;
while(T!=NULL)
{
	printf("ID:%d NAME:%s\n",T->id,T->name);
	T=T->next;
}

}

