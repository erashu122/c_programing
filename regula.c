#include<stdio.h>
#include<math.h>

float f(float x) {
    return x*x*x - 2*x - 5;
}

int main() {
    int i = 0;
    float a, b, c, t;

    printf("enter the value of a, b, t");
    scanf("%f%f%f", &a, &b, &t);

    do {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (f(a) * f(c) > 0) {
            a = c;
        } else {
            b = c;
        }

        i++;
        printf("no. of iteration %d\n", i);
        printf("root %f\n", c);
        printf("function value %f\n", f(c));
    } while (fabs(f(c)) > t);

    return 0;
}
