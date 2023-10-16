#include <stdio.h>

int main()
{
    int mark;
    printf("Enter mark");
    scanf("%d",&mark);

    if (mark<50)
    {
        printf("Failed");
    }
    else if(mark>=50 && mark<70)
    {
        printf("Passed");
    }
    else if (mark>=70)
    {
        printf("Distinction");
    }
}