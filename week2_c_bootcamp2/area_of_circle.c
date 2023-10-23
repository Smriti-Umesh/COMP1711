#include <stdio.h>

float circleArea(float radius)
{
    float area;
    area = radius*radius*3.14;
    return area;
}

int main()
{
    float r;
    float ar;
    
    printf("Enter radius");
    scanf("%f",&r);
    ar = circleArea(r);

    printf("The area of circle with radius %f is %f\n:",r,ar);

    return 0;
}