#include <stdio.h>

int sum_of_elements(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int sum = sum_of_elements(array, size);

   printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
