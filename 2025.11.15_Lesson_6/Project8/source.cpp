#include<stdio.h>

int binomial(int n, int k);

int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    scanf_s("%d %d", &n, &k);
    int result = binomial(n, k);
    printf("%d", result);
    return 0;
}
int binomial(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}