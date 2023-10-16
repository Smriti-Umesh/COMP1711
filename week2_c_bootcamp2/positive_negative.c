#include <stdio.h>

int main()
{
    int integer;

    printf("Enter an integer:\n");
    scanf("%d",&integer);

    if (integer<0)
    {
        printf("Number is negative\n");
    }
    else if (integer>0)
    {
        printf("Number is positive\n");
    }
    else if (integer==0)
    {
        printf("Number entered is 0\n");
    }
    return 0;
}