#include<stdio.h>

double fast_power(double a, int n);

int main(int argc, char** argv)
{
    double a = 0.0;
    int n = 0;
    scanf_s("%lf %d", &a, &n);
    double result = fast_power(a, n);
    printf("%.10g", result);
    return 0;
}
double fast_power(double a, int n)
{
    double result = 1.0;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = result * a;
        }
        a = a * a;
        n = n / 2;
    }
    return result;
}