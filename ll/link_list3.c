#include<stdio.h>
#include<stdlib.h>
struct STU
{
        int id;
        char name[20];
        struct STU *next;
};
struct STU * createnode();
void printllist(struct STU * temp);
struct STU * insertatposition(struct STU *T,int p);
struct STU * insertbeforekeydata(struct STU *T,int key);
struct STU * insertafterkeydata(struct STU *T,int key);
struct STU * deleteatposition(struct STU * T,int p);
struct STU * deleteheadnode(struct STU * H);
int main()
{
	struct STU * head=0,* last=0,* new=0;
	char ch='y';
	int opt,key,p;
while(ch=='y')
{
    new=createnode();                               //reading the nodes of Linked list

	 if(head==NULL)
	 {
		 head=new;
		 last=new;
	 }
	 else
	 {
	   last->next=new;
	   last=new;
         }
 	  printf("Would you like to continue:");
          scanf(" %c",&ch);
}
printllist(head);
ch='y';
while(ch=='y')
{
printf("Select below option:\n");
printf("1-Insert node at a particular position\n2-Insert node before Key data\n3-Insert node after Key data\n4-Delete a node at position\n5.Delete Head node\n");
scanf("%d",&opt);
switch(opt)
{
	case 1:printf("Enter insert position:");
	       scanf("%d",&p);
	       head=insertatposition(head,p);break;
        case 2:printf("Enter key data for insertion before node:");
               scanf("%d",&key);
               head=insertbeforekeydata(head,key);break;
	case 3:printf("Enter key data for insertion after node:");
               scanf("%d",&key);
               head=insertafterkeydata(head,key);break;
	case 4:printf("Enter deletion position:");
               scanf("%d",&p);
               head=deleteatposition(head,p);break;
	case 5:printf("After Head node Deletion:\n");
               head=deleteheadnode(head);break;

}
printllist(head);
printf("Would you like to continue(y/n):");
scanf(" %c",&ch);
}
return 0;
}
struct STU * createnode()
{
  struct STU * new;
  new=(struct STU *)malloc(sizeof(struct STU));

  new->next=NULL;
  printf("Enter the ID and name:");
  scanf("%d%s",&new->id,new->name);
  return new;
}
//=====================================print linkedlist============================/
void printllist(struct STU * temp)
{
	while(temp!=NULL)
	{
	printf("%d\t%s\n",temp->id,temp->name);
	temp=temp->next;
	}
return;
}
//===================================================Insert at position p============================/
struct STU * insertatposition(struct STU *T,int p)
{
struct STU * N,* H=0;
int i;
N=createnode();

if(p==1)                    //Head node insersion
{
	N->next=T;
	H=N;

}
else
{
	H=T;
	for(i=1;i<(p-1);i++)
	{
		T=T->next;
        }
	N->next=T->next;
	T->next=N;
}
return H;
}
//======================Insert before Key data===============================/
struct STU * insertbeforekeydata(struct STU *T,int key)
{
struct STU * N,* preptr,* ptr;
preptr=ptr=T;
while(ptr!=NULL)
{
	if(key==ptr->id)
		break;
	preptr=ptr;
	ptr=ptr->next;

}
if(ptr==NULL)
	printf("Key data not matching:\n");
else
{
N=createnode();
N->next=ptr;
preptr->next=N;
}
return T;
}
//=======================Insert after key data=====================================/

struct STU * insertafterkeydata(struct STU *T,int key)
{
struct STU * N,* preptr,* ptr;
preptr=ptr=T;
while(ptr!=NULL)
{
        if(key==preptr->id)
                break;
        preptr=ptr;
        ptr=ptr->next;

}
if(ptr==NULL)
{
	if(key==preptr->id)
	{
		N=createnode();
                N->next=ptr;
                preptr->next=N;
	}
	else
          printf("Key data not matching:\n");
}
else
{
N=createnode();
N->next=ptr;
preptr->next=N;
}
return T;
}
//========================Delete a node at a given position==============================/

struct STU * deleteatposition(struct STU * T,int p)
{
struct STU * ptr, * preptr;
ptr=T->next;
preptr=T;

       for(int i=1;i<(p-1);i++)
       {
	      ptr=ptr->next;
	      preptr=preptr->next;
        }
preptr->next=ptr->next;

free(ptr);
return T;
}

//====================================Delete Head node=========================================/

struct STU * deleteheadnode(struct STU * H)
{
struct STU * ptr;
ptr=H;
H=H->next;
free(ptr);
return H;
}
