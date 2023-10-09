#include <stdio.h>

int main() 
{
    // assigning some memory space - 15 memory slots for a name which is a string 
    char name[15];

    //prompting the user to enter their name
    printf("Hello, please enter your name: ");

    //taking the user input and storing it in name variable
    scanf("%s",name);

    // printing out the user's name
    printf("Your name is %s\n", name);

    return 0;
}