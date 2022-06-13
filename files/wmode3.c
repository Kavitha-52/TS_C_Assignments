#include<stdio.h>
int main()
{

FILE *fp=fopen("numbers.txt","w");// open a new file using file pointer
if(fp)//check if file is created or not, fp!=null creates a new file
printf("file opened successfully\n");
else
printf("file opened not successfully\n");//if fp=null file opened not successfullly
char c;
fputc('a',fp);
fputc('b',fp);
fputc('c',fp);

fclose(fp);
fp=fopen("numbers.txt","r");


while((c=fgetc(fp))!=EOF)
printf("%c\n",c);

fclose(fp); // file is closed
}
