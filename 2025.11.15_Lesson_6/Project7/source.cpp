#include<stdio.h>

int phi(int n);

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    int result = phi(n);
    printf("%d", result);
    return 0;
}
int phi(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int a = 1;
    int b = 1;
    int c = 0;
    int i = 0;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}