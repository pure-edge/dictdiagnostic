#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10; // Get the last digit of n
        reverse = reverse * 10 + remainder; // Add last digit to reverse
        n /= 10; // Remove the last digit from n
    }

    printf("Reversed number = %d", reverse);

    return 0;
}