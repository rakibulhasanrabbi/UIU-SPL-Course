#include <stdio.h>

struct student {
    char name[100];
    int id;
    float cgpa;
};

int main() {

    struct student s;

    printf("Enter student's name: ");
    fgets(s.name, sizeof(s.name), stdin);

    size_t len = strlen(s.name);
    if (len > 0 && s.name[len-1] == '\n') {
        s.name[len-1] = '\0';
    }

    // Prompt and read the student's ID
    printf("Enter student's ID: ");
    scanf("%d", &s.id);

    // Prompt and read the student's CGPA
    printf("Enter student's CGPA: ");
    scanf("%f", &s.cgpa);

    // Display the student's information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}
