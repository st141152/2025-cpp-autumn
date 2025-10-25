#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int aa = 0;
	int bb = 0;
	scanf_s("%d %d", &a, &b);
	aa = a;
	bb = b;
	if (a < b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	while (b)
	{
		c = a;
		a = b;
		b = c % b;
	}
	b = (aa * bb) / a;
	printf("%d", b);
	return 0;
}