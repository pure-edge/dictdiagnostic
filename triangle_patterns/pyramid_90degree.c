#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i <= rows - 1; i++) { // For Loop for Row
        for (j = 0; j <= i; j++) { // For Loop for Column
            printf("* "); // prints * and blank space
        }
        printf("\n"); // new line
    }

    for (i = rows - 1; i >= 0; i--) { // For Loop for Row
        for (j = 0; j <= i - 1; j++) { // For Loop for Column
            printf("* "); // prints * and blank space
        }
        printf("\n"); // new line
    }

    return 0;
}
