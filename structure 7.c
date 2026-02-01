#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float cgpa;
};

int main() {

    struct Student student1, student2;


    printf("Enter name of student 1: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    printf("Enter ID of student 1: ");
    scanf("%d", &student1.id);
    printf("Enter CGPA of student 1: ");
    scanf("%f", &student1.cgpa);
    getchar();

    // Input for student 2
    printf("Enter name of student 2: ");
    fgets(student2.name, sizeof(student2.name), stdin);
    printf("Enter ID of student 2: ");
    scanf("%d", &student2.id);
    printf("Enter CGPA of student 2: ");
    scanf("%f", &student2.cgpa);

    // Output the information of both students
    printf("\nStudent 1 Information:\n");
    printf("Name: %s", student1.name);
    printf("ID: %d\n", student1.id);
    printf("CGPA: %.2f\n", student1.cgpa);

    printf("\nStudent 2 Information:\n");
    printf("Name: %s", student2.name);
    printf("ID: %d\n", student2.id);
    printf("CGPA: %.2f\n", student2.cgpa);

    return 0;
}
