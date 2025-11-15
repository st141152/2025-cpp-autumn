#include<stdio.h>
#include<math.h>

int isPrime(int n);

int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    if (isPrime(n) == 1)
    {
        printf("prime");
    }
    else
    {
        printf("composite");
    }
    return 0;
}
int isPrime(int n)
{
    int i = 0;
    if (n <= 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 0;
    }
    int limit = sqrt(n) + 1;
    for (i = 3; i <= limit; i = i + 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}