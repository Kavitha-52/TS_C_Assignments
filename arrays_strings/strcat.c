#include<stdio.h>
void mystrcat(char d[],char s[]);
int main()
{
 char d[20] ,s[20];
 printf("enter the string name:\n");
 scanf("%s %s",s,d);
 mystrcat(d,s);
}
void mystrcat(char d[],char s[])
{
        int i=0,j=0;

        while(d[j] != '\0')
        {
                j++;
        }
        while(s[i]!='\0')
        {
                d[j]=s[i];//d[4] = s[0] ///d[5] = s[1]
                i++;
                j++;
        }
        d[j]='\0';
        printf("%s",d);
}
