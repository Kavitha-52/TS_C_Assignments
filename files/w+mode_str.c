#include<stdio.h>
int main()
{

FILE *fp=fopen("string.txt","w+");// open a new file using file pointer
if(fp)//check if file is created or not, fp!=null creates a new file
printf("file opened successfully\n");
else
printf("file opened not successfully\n");//if fp=null file opened not successfullly

char str[20]="thundersoft";
char str1[20];
fputs(str,fp);
rewind(fp);
//fgets(str1,20,fp);
fgets(str1,5,fp);
printf("%s\n",str1);
fclose(fp); // file is close
}
