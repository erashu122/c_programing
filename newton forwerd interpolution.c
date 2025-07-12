#include <stdio.h>

// Function to calculate factorial
double factorial(int n) {
    if (n <= 1)
        return 1.0;
    else
        return n * factorial(n - 1);
}

int main() {
    double x_values[] = {1.140, 1.145, 1.150, 1.155, 1.160};
    double y_values[] = {0.13102, 0.13540, 0.13976, 0.14410, 0.14842};
    double x = 1.142; // The value of x for which we want to find y
    int n = sizeof(x_values) / sizeof(x_values[0]);

    double result = 0.0;
    for (int i = 0; i < n; i++) {
        double term = y_values[i];
        for (int j = 0; j < i; j++) {
            term *= (x - x_values[j]) / (x_values[i] - x_values[j]);
        }
        result += term;
    }

    printf("Interpolated value of y when x = %.3lf is %.5lf\n", x, result);

    return 0;
}
