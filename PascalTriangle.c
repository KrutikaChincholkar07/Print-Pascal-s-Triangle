#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        int number = 1;

        // Print spaces
        for (int s = 0; s < rows - i; s++) {
            printf(" ");
        }

        // Print numbers
        for (int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
