#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;

    // Creates a file "demo_file" with write mode
    fptr = fopen("demo_file.txt", "w+");

    // Write to the file
    fprintf(fptr, "%s", "GeeksforGeeks");

    // Close the file
    fclose(fptr);

    return 0;
}

