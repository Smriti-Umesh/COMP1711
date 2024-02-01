#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("An int is size: %ld\n",sizeof(int)); 
    printf("A double is size: %ld\n",sizeof(double));  
    printf("A char is size: %ld\n",sizeof(char));  // an int is 4 bytes long

    char* name = "Jonathan";
    printf("the word %s is of size: %ld\n", name,sizeof(name)); //does not tell length of a string 

    char *address[200];
    int *data[70];

    printf("size %ld\n",sizeof(address));
    printf("size %ld\n",sizeof(data));

    int **array_2d;
    int num_row = 10;
    int num_cols = 100;

    array_2d = malloc(num_row* sizeof(int*));

    for (int i =0; i<num_row; i++)
    {
        array_2d[i] = malloc(num_cols*sizeof(int));
        
    }

}