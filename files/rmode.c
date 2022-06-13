#include<stdio.h>
int main()
{
FILE *fp=fopen("file1.txt","r");// open a new file using file pointer
if(fp)//check if file is created or not, fp!=null creates a new file
printf("file opened successfully\n");
else
printf("file opened not successfully\n");//if fp=null file opened not successfullly
//fclose(fp); // file is closed
}
