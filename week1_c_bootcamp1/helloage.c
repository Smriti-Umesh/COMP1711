#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age:");
    scanf("%d",&age);

    // &age gives memory address. only age prints the age of the user
    printf("your age is %d\n",&age);

    return 0;
}