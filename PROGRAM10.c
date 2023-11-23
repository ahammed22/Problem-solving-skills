#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        long long power = 1;
        for (int j = 0; j < i; j++) {
            power *= i;
        }
        sum += power;
    }

    printf("The sum of the series 1^1 + 2^2 + 3^3 + ... + %d^%d is: %lld\n", n, n, sum);
    return 0;
}
