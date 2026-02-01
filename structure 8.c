#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float cgpa;
};

int main() {

    struct Student student1, student2;


    scanf(" %[^\n]", student1.name);
    scanf("%d", &student1.id);
    scanf("%f", &student1.cgpa);


    scanf(" %[^\n]", student2.name);
    scanf("%d", &student2.id);
    scanf("%f", &student2.cgpa);

    struct Student higherCGPAStudent;

    if (student1.cgpa > student2.cgpa) {
        higherCGPAStudent = student1;
    }
    else {
        higherCGPAStudent = student2;
    }

    printf("\n\n%s\n", higherCGPAStudent.name);
    printf("%d\n", higherCGPAStudent.id);
    printf("%.2f\n", higherCGPAStudent.cgpa);
    return 0;
}
