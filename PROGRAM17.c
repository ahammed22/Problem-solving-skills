#include <stdio.h>

int sumDigits(int number) {
    int sum = 0;
    
    // Ensure positive number for calculation
    number = (number < 0) ? -number : number;

    while (number > 0) {
        sum += number % 10; // Extract the last digit and add it to sum
        number /= 10;       // Remove the last digit
    }

    return sum;
}

int main() {
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    int digitSum = sumDigits(num);
    printf("The sum of the digits of %d is: %d\n", num, digitSum);

    return 0;
}
