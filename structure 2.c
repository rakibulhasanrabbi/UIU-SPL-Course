#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char id[15];
    float cgpa;
} Student;


Student createDefaultStudent() {
    Student s;
    strcpy(s.name, "");
    strcpy(s.id, "");
    s.cgpa = 0.0;
    return s;
}

int main() {

    Student student = createDefaultStudent();

   printf("Name: %s\n", student.name);
    printf("ID: %s\n", student.id);
    printf("CGPA: %.2f\n", student.cgpa);

    return 0;
}
