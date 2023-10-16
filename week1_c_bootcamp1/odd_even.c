#include <stdio.h>

int main()
{
    int a;

    printf("Enter Value:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("Number is even:%d\n",a);
    }
    else
    {
        printf("Number is odd:%d\n",a);
    }
    return 0;
}