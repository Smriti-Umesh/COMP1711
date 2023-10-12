#include <stdio.h>

int main()
{   printf("What is your fav animal?\n");
    char animal[5];
    // string does not need & symbol
    scanf("%s",animal);
    printf("Fav animal %s\n",animal);
    return 0;
}