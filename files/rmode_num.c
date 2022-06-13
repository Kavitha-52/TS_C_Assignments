#include<stdio.h>
int main()
{

FILE *fp=fopen("numbers","r");// open a new file using file pointer
if(fp)//check if file is created or not, fp!=null creates a new file
printf("file opened successfully\n");
else
printf("file opened not successfully\n");//if fp=null file opened not successfullly

int i;
putw(10,fp);
putw(20,fp);
putw(30,fp);

while((i=getw(fp))!=EOF) //read function is not required and these stamts are not give any error
printf("%d\n",i);

fclose(fp); // file is closed
}
