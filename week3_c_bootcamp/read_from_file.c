#include <stdio.h>

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    // number of characters read per line
    int buffer_size = 100;
    // a string which will hold each line
    char line_buffer[buffer_size];
    // an arbitrary number if we are unsure of file size
    // static allocation of array 
    // dynamic allocation - next semester 
    int numbers[1000];

    int line_number = 0 ;

    // while there is stil stuff in the file 
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        // reads data and converts into number
        printf("%d\n", atoi(line_buffer));
        numbers[line_number] = atoi(line_buffer);
        line_number++;
    }
    printf("there are %d lines\n",line_number);

    fclose(file);
    return 0;
}