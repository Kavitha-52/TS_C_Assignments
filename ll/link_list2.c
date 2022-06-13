#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
    int ID;
    struct stu *next;
}STU;
STU * create_node(STU * new_node);
STU * insert_position(head,postion);
STU * insert_before_key(head,key);
STU * insert_After_key(head,key);
void display_ll(STU *);
struct stu *create(struct stu *head);
struct stu *deletion(struct stu *T,int key);
struct stu *reverse(struct stu *);
void middle(struct stu *);

int main()
{
    struct stu *head=0, *new_node=0,*latest=0,*m;
    char ch='y';
    int option,position,key;
    head=create(head);
    display_ll(head);
    while(ch == 'y')
    {
        printf("choose any option\n");
        printf("choose:1 to insert node at given position\n");
        printf("choose:2 to insert node given before key\n");
        printf("choose:3 to insert node after given key\n");
        printf("choose:4 to delete the key\n");
        printf("choose:5 to reverse\n");
        printf("choose:6 to find the middle node\n");
        printf("choose:7 to display\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                    printf("enter position\n");
                    scanf("%d",&position);
                    head=insert_position(head,position);
                    break;
            case 2:
                    printf("enter key(data)\n");
                    scanf("%d",&key);
                    head=insert_before_key(head,key);
                    break;
            case 3:
                    printf("enter key(data)\n");
                    scanf("%d",&key);
                    head=insert_After_key(head,key);
                    break;
            case 4:
                    printf("enter key(data)\n");
                    scanf("%d",&key);
                    head=deletion(head,key);
                    break;
            case 5:
                    head=reverse(head);
                    break;
            case 6:
                    middle(head);
                    break;
            case 7:
                    display_ll(head);
                    break;

        }
        printf("Do you want to continue\n");
        scanf("\n%c",&ch);
    }
}

STU * create_node(STU * new_node)
{
    new_node=(STU *)malloc(sizeof(STU));
    new_node->next =0;
    printf("please enter ID\n");
    scanf("%d",&new_node->ID);
    return new_node;
}

STU * insert_position(STU *head,int position)
{
    STU * new_node=create_node(new_node);
    STU *temp=0;
    if(position==1)
    {
        new_node->next=head;
        head=new_node;
        return head;
    }
    else
    {
        temp=head;
        int i=1;
        while(i<position-1)
        {
            temp=temp->next;
            i++;
        }
    }
    new_node->next=temp->next;
    temp->next=new_node;
    return head;
}

STU * insert_before_key(STU *head,int key)
{
    STU * new_node=create_node(new_node);
        STU *temp=head;
        while(temp->next->ID!=key && temp ->next!=0)
        {
            temp=temp->next;
        }
         new_node->next=temp->next;
        temp->next=new_node;
    return head;
}

STU * insert_After_key(STU *head,int key)
{
    STU * new_node=create_node(new_node);
        STU *temp=head;
        while(temp->ID!=key)
        {
            temp=temp->next;
        }
         new_node->next=temp->next;
         temp->next=new_node;
    return head;
}

void display_ll(STU *head)
{
    STU *t=head;
    printf("ID\n");
	while(t!=NULL)
	{
		printf("%d\n",t->ID);
		t=t->next;
	}
}


struct stu *create(struct stu *head)
{
    STU *l=0,*new=0;
    char ch='y';
	while(ch=='y')
	{
		new=(STU*)malloc(sizeof(STU));
		new->next=NULL;
		printf("Enter id:");
		scanf("%d",&new->ID);
		if(head==NULL)
			head=new;
		else
			l->next=new;
		l=new;
		printf("Enter yes to continue or Enter no to exit:");
		scanf("\n%c",&ch);
	}
    return head;
}

struct stu *deletion(struct stu *T,int key)
{
	STU *new=0,*h=T;
	if(T==0)
	{
		printf("empty list\n");
		return T;
	}
if(T->ID==key)
{
	new=T;
	T=T->next;
	free(new);
	return T;
}
else
{
	while(T->next !=0)
	{
		if(T->next->ID==key)
		{
			new=T->next;
			T->next=new->next;
			free(new);
		}
	T=T->next;
	}
return h;
}
printf("%d not available in the list\n",key);
return h;
}

struct stu *reverse(struct stu *head)
{
    STU *p=0,*q=0,*r=0;
    p=head;
    q=p->next;
    r=q->next;
    while(q!=0)
    {
        q->next=p;
        p=q;
        q=r;
        if(r!=0)
            r=r->next;
    }
    head->next=0;
    return p;
}

void middle(struct stu *head)
{
    STU *p=0,*q=0;
    p=q=head;
    while(q->next||q)
    {
        p=p->next;
        q=q->next->next;
    }
    printf("%d is the middle node\n",p->ID);
}
