#include<stdio.h>
#pragma pack(1)
struct padding
{
    char a;
    char b;
    int c;
};
int main()
{
    struct padding s;
    printf("%ld",sizeof(s));
}


