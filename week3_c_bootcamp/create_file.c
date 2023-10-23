#include <stdio.h>
#include <stdlib.h>

int main () {
    char* filename = "data.txt";
    FILE *file = fopen (filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    // if file does not exist it creates the file on its own
    fprintf(file,"Hello world!\n");

    fclose(file);
    return 0;
}