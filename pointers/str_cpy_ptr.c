//rogram to copy one string to another string and find length of new string using pointers.

#include<stdio.h>
void mystrcpy(char *d,char *s);
void mystrlen(char *str);
int main()
{
	 char d[20] ,s[10];
	 int count;
	
	 printf("enter the string names:\n");
	 scanf("%s %s",s,d);
	 mystrcpy(d,s);
	 mystrlen(d);
}
void mystrcpy(char * d,char *s)
{
        char *str=d;
        while(*s !='\0')
        {
                *d=*s;
                s++;
                d++;
        }
        *d='\0';
        printf("After copying %s\n",str);
}
void mystrlen(char *d)
{
       int count=0;
       while(*d!='\0')
        {
                d++;

                count++;
        }
        printf("string length is : %d\n",count);
}
