#include <stdio.h>

int main()
{
    float Farenheit;
    float Celsius;

    printf("Enter temperature in Farenheit:");
    scanf("%f",&Farenheit);

    Celsius = (Farenheit-32)*5/9;
    printf("The temperature in Celsius is %f\n:",Celsius);

    return 0;
}