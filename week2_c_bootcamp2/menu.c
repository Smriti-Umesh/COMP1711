#include <stdio.h>

int main()
{
    int item_choice;
    printf(""
    "1. Noodle Soup\n"
    "2. Tomato Soup\n"
    "3. Monchow Soup\n"
    "4. Coriander Soup\n"
    "5. Lemon Soup:\n");

    scanf("%d",&item_choice);

    switch(item_choice)
    {
        case 1:
            printf("Noodle Soup has been selected");
            break;
        case 2:
            printf("Tomato Soup has been selected");
            break;
        case 3:
            printf("Monchow Soup has been selected");
            break;
        case 4:
            printf("Coriander Soup has been selected");
            break;
        case 5:
            printf("Lemon Soup has been selected");
            break;

        default:
            printf("Invalid option selected");
    }
}