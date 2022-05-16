#include<stdio.h>
int main()
{
	int a,b,res;
	printf("enter a,b values:\n");
	scanf("%d %d",&a,&b);
	//arithmetic operators//
	 
	res=a+b;
	printf("addn operator=%d\n",res);
	res=a-b;
	printf("sub operator =%d\n",res);
	res=a*b;
	printf("mul operator =%d\n",res);
	res=a/b;
	printf("modulus operator =%d\n",res);
       //assignment operators//

	res +=a;
	printf("value of res=%d\n",res);
	res*=a;
	printf("value of res=%d\n",res);

	// relational operator//
	
	printf("%d==%d is %d\n",a,b,a==b);
	printf("%d>=%d is  %d\n",a,b,a>=b);
	printf("%d<=%d is %d\n",a,b,a<=b);
        printf("%d!=%d is %d\n",a,b,a!=b);
	printf("%d<%d is %d\n",a,b,a<b);
	printf("%d>%d is %d\n",a,b,a>b);

	// logical operators//
        res=a&&b;
	printf("AND operator = %d\n",res);
	res=a||b;
	printf("OR operator = %d\n",res);
	res=a!=b;
	printf("NOT operator =  %d\n",res);

	// bit wise operator//
	
	res=a&b;
	printf("AND operator =%d\n",res);
	res=a|b;
	printf("OR operator =%d\n",res);
	res=a<<2;
	printf("left shift operator = %d\n",res);
	res=a^b;
	printf("XOR operator = %d\n",res);
	(a>b)?printf("a is greater"):printf("b is greater");
        // increment and decrement operator//
	int c=10;
	res=++c;
	printf("value of a :%d\n",res);
	res=c--;
	printf("value of a : %d\n",res);
return 0;
}

