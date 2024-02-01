#include <stdio.h>

int main()
{   
    // makes a new int called 'var' with the value of 10
    int var=10;

    // creates a int pointer called 'var_address' and set it to address of the var 
    // star indicates pointer to the integer
    int* var_address=&var;

    // pointer - a variable which holds the address to something and point that address to different places of memory
    printf("\n");
    printf("The content of \"var\" = %d\n",var);

    // var_address keeps changing as RAM always changes and program is put somewhere in the RAM
    printf ("The content \"var_address\" = %p\n", var_address);

    printf ("Now the magic ! Content of \"*var_address\" = %d\n", *var_address);
    
    printf("\n");
}