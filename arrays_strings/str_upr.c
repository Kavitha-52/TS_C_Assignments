#include<stdio.h>
void strupr(char str[]);
int main()
{
        int n;
        char str[20];
       printf("enter the string name:\n");
      scanf("%s",str);
       strupr(str);
       return 0;
}
void strupr(char str[])
{
        int i;
        for(i=0;str[i]!='\0';i++)
        {
               if(str[i]>='a'&&str[i]<='z')
                str[i]=str[i]-32;
        }

        printf("%s",str);
}
