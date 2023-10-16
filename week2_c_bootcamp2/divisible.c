#include <stdio.h>

int main()
{
    int num1;
    printf("Enter value:");
    scanf("%d",&num1);

    if (num1%4==0 && num1%5==0)
    {
        printf("Number is divisible by 4 and 5\n");
    }

    else
    {
        printf("Number divisible by neither 4 or 5\n");
    }
    return 0;
}