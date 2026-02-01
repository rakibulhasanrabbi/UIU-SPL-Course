#include <stdio.h>
#include <string.h>

// Define the structure
struct student {
    char name[50];
    int id;
    float cgpa;
};

int main() {

    struct student s1;

    // Assign values to the member variables
    strcpy(s1.name, "Rakibul Hasan Rabbi");
    s1.id = 112330255;
    s1.cgpa = 3.75;

    // Print the values to verify
    printf("Name: %s\n", s1.name);
    printf("ID: %d\n", s1.id);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}
