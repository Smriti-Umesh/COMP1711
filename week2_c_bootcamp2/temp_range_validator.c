#include <stdio.h>

int main()
{
    float temp;
    printf("Enter temp\n:");
    scanf("%f",&temp);

    if(temp>=-10 && temp<=40)
    {
        printf("Temperature is in range");
    }
    else
    {
        printf("Temperature is not in range");
    }
    return 0;
}