#include <stdio.h>

int main()
{
    int sum[5] = {1, 2, 3, 4, 5};
    int sum_ans = 0;  
    int counter;

    for (counter = 0; counter < 5; counter++)  
    {
        sum_ans = sum_ans + sum[counter];
    }

    printf("Sum of numbers in array is: %d\n", sum_ans);

    return 0;
}