#include <stdio.h>
void displayNumbers(int n);

int main() {

    displayNumbers(1);
    return 0;
}

void displayNumbers(int n) {

    if (n > 10) {
        return;
    }

    printf("%d ", n);

    displayNumbers(n + 1);
}
