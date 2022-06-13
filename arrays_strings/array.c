#include <stdio.h>

int main()
{
    //int arr[]={1,2,3,4,5,6,7};
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    
    printf("address of the array:\n");
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    printf("%p\n",arr+2);
    printf("%p\n",arr+3);
    printf("%p\n",arr+4);
    printf("%p\n",arr+5);
    printf("%p\n",arr+6);
    printf("elements of the array:\n");
    printf("%d\n",*(arr));
    printf("%d\n",*(arr+1));
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+3));
    printf("%d\n",*(arr+4));
    printf("%d\n",arr[5]);
    printf("%d\n",arr[1]);
        return 0;
}
