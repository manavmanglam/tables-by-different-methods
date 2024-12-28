#include <stdio.h>

int main() {
    int limit;
    int i = 1;

    printf("Enter the limit for the table of 5: ");
    scanf("%d", &limit);

    printf("Multiplication Table of 5 (up to %d):\n", limit);

    while (i <= limit) {
        printf("5 x %d = %d\n", i, 5 * i);
        i++;
    }

    return 0;
}
