#include <stdio.h>

struct student {
    char name[50];
    int id;
    float cgpa;
};

int main() {

    struct student stud;
    strcpy(stud.name, "Rakibul Hasan Rabbi");
    stud.id = 112330255;
    stud.cgpa = 3.75;

    // Display the values of the member variables
    printf("Name: %s\n", stud.name);
    printf("ID: %d\n", stud.id);
    printf("CGPA: %.2f\n", stud.cgpa);

    return 0;
}
