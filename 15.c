#include <stdio.h>

void printEven(int start, int end) {

    if (start > end) {
        return;
    }

    if (start % 2 == 0) {
        printf("%d ", start);
    }

    printEven(start + 1, end);
}

void printOdd(int start, int end) {

    if (start > end) {
        return;
    }

    if (start % 2 != 0) {
        printf("%d ", start);
    }

    printOdd(start + 1, end);
}

int main() {
    int start, end;
    char choice;

    // Input the range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Input the choice for even or odd
    printf("Do you want to print even or odd numbers? (e/o): ");
    scanf(" %c", &choice);

    if (choice == 'e') {
        printf("Even numbers from %d to %d:\n", start, end);
        printEven(start, end);
    } else if (choice == 'o') {
        printf("Odd numbers from %d to %d:\n", start, end);
        printOdd(start, end);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
