#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 5};
    // Calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);
    // Initialize minimum with the first element of the array
    int minimum = array[0];
    int index = 0;

    for (int c = 1; c < size; c++) {
        if (array[c] < minimum) {
            minimum = array[c];
            index = c;
        }
    }

    printf("Minimum element is present at index %d and its value is %d.\n", index, minimum);
    return 0;
}