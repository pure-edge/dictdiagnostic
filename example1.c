#include <stdio.h>

void main() {
    int input;
    scanf("%d", &input);
    int repeat = input;
    for (int row = 1; row <= input; row++) {
        for (int col = 1; col <= repeat; col++) {
            printf("%d ", row);
        }
        printf("\n");
        repeat--;
    }
}