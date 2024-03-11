#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = rows; i > 0; i--) {
        int num = i;
        for (int j = 0; j < i; j++) {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}
