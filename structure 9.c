#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float cgpa;
};


void printBetterStudent(struct Student s1, struct Student s2) {
    if (s1.cgpa > s2.cgpa) {
        printf("Student with better CGPA:\n");
        printf("Name: %s\n", s1.name);
        printf("ID: %d\n", s1.id);
        printf("CGPA: %.2f\n", s1.cgpa);
    } else {
        printf("Student with better CGPA:\n");
        printf("Name: %s\n", s2.name);
        printf("ID: %d\n", s2.id);
        printf("CGPA: %.2f\n", s2.cgpa);
    }
}

int main() {
    struct Student student1, student2;

    // Input data for the first student
    printf("Enter details for the first student:\n");
    printf("Name: ");
    fgets(student1.name, 50, stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0'; // Remove newline character
    printf("ID: ");
    scanf("%d", &student1.id);
    printf("CGPA: ");
    scanf("%f", &student1.cgpa);
    getchar(); // Consume newline character left in the buffer

    // Input data for the second student
    printf("Enter details for the second student:\n");
    printf("Name: ");
    fgets(student2.name, 50, stdin);
    student2.name[strcspn(student2.name, "\n")] = '\0'; // Remove newline character
    printf("ID: ");
    scanf("%d", &student2.id);
    printf("CGPA: ");
    scanf("%f", &student2.cgpa);

    // Print the student with the better CGPA
    printBetterStudent(student1, student2);

    return 0;
}
