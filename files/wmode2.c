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

char c;
fputc('h',fp);
fputc('e',fp);
fputc('l',fp);
fputc('l',fp);
fputc('o',fp);

while((c=fgetc(fp))!=EOF) //read function is not required and these stamts are not give any error
printf("%c\n",c);

fclose(fp); // file is closed
}
