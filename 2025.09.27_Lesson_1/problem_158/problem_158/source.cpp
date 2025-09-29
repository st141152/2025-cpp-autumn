#include <stdio.h>

int main(int argc, char** argv)
{
    int a;
    int b;
    scanf_s("%d %d", &a, &b);
    int c = b / a;
    int d = b % a;
    int e = (a - b % a) * (int)((b % a + a - 0.01) / a);
    printf("%d %d %d", c, d, e);
    return 0;
}