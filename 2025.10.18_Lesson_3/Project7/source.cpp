#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    int e = 0;
    for (int f = -100; f <= 100; ++f)
    {
        long long g = (long long)a * f * f * f + (long long)b * f * f + (long long)c * f + d;
        if (g == 0)
        {
            printf("%d ", f);
            e = e + 1;
            if (e == 3) break;
        }
    }
    return 0;
}