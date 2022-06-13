
// in write mode no need to check EOF
#include<stdio.h>
int main()
{
// in write mode read function will not work
FILE *fp=fopen("file1.txt","w");// open a new file using file pointer
if(fp)//check if file is created or not, fp!=null creates a new file
printf("file opened successfully\n");
else
printf("file opened not successfully\n");//if fp=null file opened not successfullly
fclose(fp); // file is closed
}
