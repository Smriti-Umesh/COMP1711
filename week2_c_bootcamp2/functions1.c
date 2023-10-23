#include <stdio.h>

int sum (int a, int b)
{
    int answer;
    answer = a + b; // a cannot be printed (something similar to local and global scope...?)
    return answer;
}

int main () 
{
    int y = 2;
    int z = sum(sum(5,6), y); // calling our new function

    printf ("The sum of 5 and %d is %d\n", y, z);
}