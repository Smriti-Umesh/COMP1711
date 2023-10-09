#include <stdio.h>

int main()
{
    float length;
    float width;
    float area;

    printf("Enter length:");
    // why &? it is used because we need to tell C where to store. 
    scanf("%f",&length);
    printf("Enter width:");
    scanf("%f",&width);


    area = length*width;
    //the amount of variables defined within string should be equal to the num of var outside string
    // %g represents a float and puts decimal where it is required, 

    printf("The rectange with length %f and width %f has an area %f\n: ", length,width,area);

    return 0;


}