#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (log(x) * log(x));
}

int main()
{
    int i, n;
    float a, b, h, s = 0, t;
    printf("Enter lower limit: ");
    scanf("%f", &a);
    printf("Enter upper limit: ");
    scanf("%f", &b);
    printf("Enter the number of sub-intervals: ");
    scanf("%d", &n);

    h = fabs(b - a) / n;

    for (i = 1; i < n; i++)
    {
        s = s + f(a + i * h);
    }

    t = (h / 2) * (f(a) + f(b) + 2 * s);
    printf("\nTHE INTEGRAL IS: %f\n", t);

    return 0;
}