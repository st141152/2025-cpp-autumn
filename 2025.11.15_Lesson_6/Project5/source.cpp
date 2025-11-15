#include<stdio.h>

double power(double a, int n);

int main(int argc, char** argv)
{
    double a = 0.0;
    int n = 0;
    scanf_s("%lf %d", &a, &n);
    double result = power(a, n);
    printf("%.10g", result);
    return 0;
}
double power(double a, int n)
{
    if (n == 0)
    {
        return 1.0;
    }

    if (n < 0)
    {
        return 1.0 / power(a, -n);
    }

    if (n % 2 == 0)
    {
        double half_power = power(a, n / 2);
        return half_power * half_power;
    }
    else
    {
        return a * power(a, n - 1);
    }
}