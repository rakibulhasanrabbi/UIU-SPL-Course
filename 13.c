#include <stdio.h>

int countDigits(int n) {

    if (n == 0) {
        return 0;
    }

    return 1 + countDigits(n / 10);
}

int main() {
    int number;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    printf("Number of digits: %d\n", countDigits(number));

    return 0;
}
