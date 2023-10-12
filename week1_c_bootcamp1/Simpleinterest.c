#include <stdio.h>

int main()
{
    float principal_amount;
    float number_of_years;
    float rate_of_interest;
    float simple_interest;

    printf("Enter principal_amount:");
    scanf("%f",&principal_amount);
    printf("Enter number_of_years:");
    scanf("%f",&number_of_years);
    printf("Enter rate_of_interest:");
    scanf("%f",&rate_of_interest);

    simple_interest = (principal_amount*number_of_years*rate_of_interest)/100;
    printf("The simple interest is %f\n:",simple_interest);

    return 0;

}