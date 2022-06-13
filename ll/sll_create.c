#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
 struct node *head=NULL;
void create_sll(int m);
void display();
int main()
{
    int n,i,m;
    printf("enter how many nodes you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter data :");
        scanf("%d",&m);
        create_sll(m);
    }
        display();

}
void display()
{
    struct node *new;
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    new=head;
    while(new!=NULL)
    {
        printf("\nnode address=%p \tnode data=%d\n",new,new->data);
        new=new->link;
        printf("\tnext node adress address=%p",new);
    }
}
void create_sll(int m)
{
    struct node *temp,*new=0;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;//if list empty
    }
    else
    {
       new=head;
       while(new->link!=NULL)
       {
           new=new->link;
       }
       new->link=temp;

    }
}
