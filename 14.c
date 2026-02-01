#include <stdio.h>

int findLargest(int arr[], int n) {

    if (n == 1) {
        return arr[0];
    }

    int maxInRest = findLargest(arr, n - 1);

    if (arr[n - 1] > maxInRest) {
        return arr[n - 1];
    } else {
        return maxInRest;
    }
}

int main() {
    int arr[] = {1, 5, 3, 9, 2, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, n);

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
