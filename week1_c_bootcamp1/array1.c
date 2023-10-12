#include <stdio.h>

int main()
    
{
    int a;
    int my_array[5] = {1,3,4,5,6};

    for (a=0; a<6; a++)
    {
        print("%d\n", my_array[a]);
    }
    return 0;
}