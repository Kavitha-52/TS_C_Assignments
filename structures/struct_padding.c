#include<stdio.h>
struct padding
{
    char a;
    char b;
    int c;
};
int main()
{
    struct padding s;
    printf("%ld\n",sizeof(s));
}
