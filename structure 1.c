
#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    char id[20];
    float cgpa;
};

int main() {

    struct Student student1;


    strcpy(student1.name, "Rakibul Hasan");
    strcpy(student1.id, "0112330255");
    student1.cgpa = 3.8;


    printf("Student Name: %s\n", student1.name);
    printf("Student ID: %s\n", student1.id);
    printf("CGPA: %.2f\n", student1.cgpa);

    return 0;
}
