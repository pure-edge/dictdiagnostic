#include <stdio.h>

int main() {
    int first, second, temp;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    // Swapping using a temporary variable
    temp = first;
    first = second;
    second = temp;

    printf("\nAfter swapping, first number = %d\n", first);
    printf("After swapping, second number = %d", second);
    return 0;
}