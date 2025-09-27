#include <cstdio>

int main(int argc, char** argv)
{
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);
	printf("%lld", (long long)(a - 1) * (b - 1) + 1);
	return 0;
}