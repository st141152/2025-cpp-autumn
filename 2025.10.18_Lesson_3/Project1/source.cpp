#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    if (n <= 0)
    {
        printf("0");
    }
    else if (n == 1 || n == 2)
    {
        printf("1");
    }
    else
    {
        long long a = 0;
        long long b = 0;
        long long c = 0;
        int d = 0;
        a = 1;
        b = 1;
        d = 3;
        while (d <= n)
        {
            c = a + b;
            a = b;
            b = c;
            d = d + 1;
        }
        printf("%lld", b);
    }
    return 0;
}