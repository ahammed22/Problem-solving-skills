//Exponential Series

#include <stdio.h>
#include <math.h>

double calculateExponential(double x, int terms) {
    double result = 1.0;
    double term = 1.0;
    int i = 1;
    
    while (i < terms) {
        term = term * x / i;
        result += term;
        i++;
    }
    
    return result;
}

int main() {
    double x;
    int num_terms;
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    printf("Enter the number of terms: ");
    scanf("%d", &num_terms);
    
    double expValue = calculateExponential(x, num_terms);
    
    printf("The value of e^%lf - 1 is: %lf\n", x, expValue);
    
    // Compare the result with the exp function from math.h
    printf("Using math.h exp function: %lf\n", exp(x) - 1);
    
    return 0;
}
