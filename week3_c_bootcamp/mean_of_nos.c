#include <stdio.h>
#include <stdlib.h>
int main()
{
    float mean;
    int user_input;
    int i=0;
    int total=0;
    int numbers[10] = {0};
    char* filename = "mean.txt";
    FILE *file = fopen(filename, "w"); //

    printf("How many numbers do you wish to enter?\n");
    scanf("%d",&user_input);

    for(i=0; i<user_input; i++)
    {
        printf("\nEnter a number:");
        scanf("%d",&numbers[i]);
        total += numbers[i];
    }
    mean = total/user_input;
    printf("\n");

    for(i=user_input; i<user_input; i++)
    {
        printf("%d\n",numbers[i]);
    }

    printf("The average is %f\n",mean);
    return 0;

    
    fclose(file);
}