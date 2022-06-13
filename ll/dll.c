//Head insersion of double linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node* next;
struct node* prev;
};

struct node* head=NULL;
//Creates a new Node and returns pointer to it. 
struct node* createnode(int x)
{
	struct node* new = (struct node*)malloc(sizeof(struct node));
	new->data = x;
	new->prev = NULL;
	new->next = NULL;
	return new;
}
//Inserts a Node at head of Doubly linked list
void insertathead(int x) {
	
	struct node* new = createnode(x);
	if(head == NULL) {
		head = new;
		return;
	}
	head->prev = new;
	new->next = head; 
	head = new;
}

void display()
{
struct node* temp=head;
printf("Forward Double linked list is : ");
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}

int main()
{
    insertathead(10);
    display();
    insertathead(20);
    display();
    insertathead(30);
    display();
    insertathead(40);
    display();
return 0;
}
