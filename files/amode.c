#include<stdio.h>
int main()
{

FILE *fp=fopen("file1.txt","a");// open a new file using file pointer
if(fp)//check if file is created or not, fp!=null creates a new file
printf("file opened successfully\n");
else
printf("file opened not successfully\n");//if fp=null file opened not successfullly

char c;
fputc(' ',fp);
fputc('t',fp);
fputc('s',fp);

//in append mode read function not work
//while((c=fgetc(fp))!=EOF) //read function is not required and these stamts are not give any error
//printf("%c\n",c);

fclose(fp); // file is closed
}
