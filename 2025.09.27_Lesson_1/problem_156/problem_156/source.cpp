#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d\n", (a % b) * (b % a) + 1);
	return 0;
}