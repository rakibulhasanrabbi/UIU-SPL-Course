#include <stdio.h>

void addNumbers(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int num1, num2, num3, num4;
    int result1, result2;

    printf("Enter the first pair of numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the second pair of numbers: ");
    scanf("%d %d", &num3, &num4);

    // Add first pair
    addNumbers(&num1, &num2, &result1);

    // Add second pair
    addNumbers(&num3, &num4, &result2);

    // Print results
    printf("Sum of first pair: %d\n", result1);
    printf("Sum of second pair: %d\n", result2);

    return 0;
}
