#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Could not open file sample.txt\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}
