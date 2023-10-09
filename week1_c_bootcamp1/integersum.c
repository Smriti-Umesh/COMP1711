#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int answer;

    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    answer = num1 + num2;
    printf("The sum is %d\n:", answer);
    return 0;
}