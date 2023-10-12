#include <stdio.h>

int main()
{
    float radius;
    float area;

    printf("Enter radius:");
    scanf("%f",&radius);

    area = 3.14*radius;
    printf("The radius %f of the circle with area is %f\n:",radius,area);

    return 0;
}