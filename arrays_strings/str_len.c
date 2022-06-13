#include<stdio.h>
 int mystrlen(char str[]);
int main()
{
        char name[100];
        int count;
        printf("enter name:");
                scanf(" %s",name);
        count= mystrlen(name);

                printf("strlen=%d\n",count);
        return 0;
}
int mystrlen(char str[])
{
        int i;
        for(i=0;str[i]!='\0';i++);
                return i;
}
