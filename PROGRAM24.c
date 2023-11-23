//Swap 3 numbers a to b, b to c and c to a

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for c: ");
    scanf("%d", &c);

    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    // Swapping without temporary variable
    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
