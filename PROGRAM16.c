#include <stdio.h>

void printDigits(int number) {
    if (number < 0) {
        printf("Please enter a non-negative number.\n");
        return;
    }

    if (number == 0) {
        printf("The number is 0\n");
        return;
    }

    printf("The digits of the number %d are: ", number);

    // Temporary variables for calculations
    int temp = number;
    int digit;
    int divisor = 1;

    // Find the appropriate divisor
    while (temp / 10 != 0) {
        divisor *= 10;
        temp /= 10;
    }

    // Extract and print digits
    while (divisor != 0) {
        digit = number / divisor;
        printf("%d ", digit);
        number %= divisor;
        divisor /= 10;
    }

    printf("\n");
}
