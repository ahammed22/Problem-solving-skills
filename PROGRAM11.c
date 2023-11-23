
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i * i;
    }

    printf("The sum of squares of odd numbers up to %d is: %d\n", n, sum);
    return 0;
}
