//Finding the biggest out of n integers

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    // Declare an array to store the integers
    int numbers[n];
    
    // Input the integers
    for (i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Assume the first number is the largest
    int largest = numbers[0];
    
    // Iterate through the array to find the largest number
    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    
    printf("The largest number is: %d\n", largest);
    
    return 0;
}
