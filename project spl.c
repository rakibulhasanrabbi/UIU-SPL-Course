
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100


struct Student {
    char name[50];
    char id[20];
    float cgpa;
    int age;
};


void addStudent(struct Student students[], int *numStudents) {
    if (*numStudents >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter student name: ");
    scanf("%s", newStudent.name);

    printf("Enter student ID: ");
    scanf("%s", newStudent.id);

    printf("Enter student CGPA: ");
    scanf("%f", &newStudent.cgpa);

    printf("Enter student age: ");
    scanf("%d", &newStudent.age);

    students[*numStudents] = newStudent;
    (*numStudents)++;

    printf("Student added successfully.\n");
}


void showAllStudents(struct Student students[], int numStudents) {
    printf("Student Information:\n");
    printf("Name\t\tID\t\tCGPA\tAge\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\t\t%s\t\t%.2f\t%d\n", students[i].name, students[i].id, students[i].cgpa, students[i].age);
    }
}


void findBestStudent(struct Student students[], int numStudents) {
    float maxCgpa = 0;
    int index = -1;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].cgpa > maxCgpa) {
            maxCgpa = students[i].cgpa;
            index = i;
        }
    }
    if (index != -1) {
        printf("Best Student:\n");
        printf("Name: %s\nID: %s\nCGPA: %.2f\nAge: %d\n", students[index].name, students[index].id, students[index].cgpa, students[index].age);
    } else {
        printf("No student found.\n");
    }
}


void findMostSeniorStudent(struct Student students[], int numStudents) {
    int maxAge = 0;
    int index = -1;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].age > maxAge) {
            maxAge = students[i].age;
            index = i;
        }
    }
    if (index != -1) {
        printf("Most Senior Student:\n");
        printf("Name: %s\nID: %s\nCGPA: %.2f\nAge: %d\n", students[index].name, students[index].id, students[index].cgpa, students[index].age);
    } else {
        printf("No student found.\n");
    }
}


void saveStudentInfoToFile(struct Student students[], int numStudents) {
    FILE *file = fopen("studentinformation.csv", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fprintf(file, "Name, ID, CGPA, Age\n");
    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%s, %s, %.2f, %d\n", students[i].name, students[i].id, students[i].cgpa, students[i].age);
    }

    fclose(file);

    printf("Student information saved to studentinformation.csv\n");
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add a new student\n");
        printf("2. Show all students\n");
        printf("3. Find the best student\n");
        printf("4. Find the most senior student\n");
        printf("5. Save student information to file\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &numStudents);
                break;
            case 2:
                showAllStudents(students, numStudents);
                break;
            case 3:
                findBestStudent(students, numStudents);
                break;
            case 4:
                findMostSeniorStudent(students, numStudents);
                break;
            case 5:
                saveStudentInfoToFile(students, numStudents);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
