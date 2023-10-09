#include <stdio.h>

int main()
{
    float a;
    float b = 3.641;
    float c;

    a = 2.897;
    c = a+b;

    // %.3f will round off the answer to 3 decimal places 
    printf("The sum of %.3f and %.3f is %f\n",a,b,c);

    return 0;
}