#include <stdio.h>

int reverseDigits(int number) {
    int reversed = 0;

    while (number != 0) {
        int digit = number % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        number /= 10; // Remove the last digit
    }

    return reversed;
}

int main() {
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    int reversedNum = reverseDigits(num);
    printf("The reversed number of %d is: %d\n", num, reversedNum);

    return 0;
}
