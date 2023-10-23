#include <stdio.h>

float volSphere(float radius)
{
    float vol;
    vol = 1.34*3.14*radius*radius*radius;
    return vol;
}

int main()
{
    float r;
    float volume;
    printf("Enter radius:");
    scanf("%f",&r);
    volume = volSphere(r);

    printf("Volume is %f\n:",volume);

    return 0;

}