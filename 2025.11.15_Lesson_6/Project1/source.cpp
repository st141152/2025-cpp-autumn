#include<stdio.h>

int min(int a, int b, int c, int d);

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    int result = min(a, b, c, d);
    printf("%d", result);
    return 0;
}
int min(int a, int b, int c, int d)
{
    int min_value = a;
    if (b < min_value)
    {
        min_value = b;
    }
    if (c < min_value)
    {
        min_value = c;
    }
    if (d < min_value)
    {
        min_value = d;
    }
    return min_value;
}