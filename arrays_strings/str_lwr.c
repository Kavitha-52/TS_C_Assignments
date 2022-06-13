#include<stdio.h>
void mystrlwr(char str[]);
int main()
{
        char str[20];
       printf("enter the string name:\n");
      scanf("%s",str);
       mystrlwr(str);
       return 0;
}
void mystrlwr(char str[])
{
        int i;
        for(i=0;str[i]!='\0';i++)
        {
               if(str[i]>='A'&&str[i]<='Z')
                str[i]=str[i]+32;
        }
        printf("%s",str);

}
