#include <stdio.h>
#include <stdlib.h>

void append_to_file(const char *filename) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int num_lines;
    printf("Enter the number of lines you want to append: ");
    scanf("%d", &num_lines);
    getchar();

    char buffer[256];
    for (int i = 0; i < num_lines; ++i) {
        printf("Enter line %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        fputs(buffer, file);
    }

    fclose(file);
    printf("Lines appended successfully.\n");
}

int main() {
    const char *filename = "output.txt";
    append_to_file(filename);
    return 0;
}
