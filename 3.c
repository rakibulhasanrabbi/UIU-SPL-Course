#include <stdio.h>

void printArrayElements(int *arr, int size) {
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    printArrayElements(array, size);

    return 0;
}
