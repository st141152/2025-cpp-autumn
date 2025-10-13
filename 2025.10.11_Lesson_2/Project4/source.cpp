#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	scanf_s("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	if (a > b)
	{
		a = a + b; b = a - b; a = a - b;
	}
	if (a > c)
	{
		a = a + c; c = a - c; a = a - c;
	}
	if (b > c)
	{
		b = b + c; c = b - c; b = b - c;
	}
	if (d > e)
	{
		d = d + e; e = d - e; d = d - e;
	}
	if (d > f)
	{
		d = d + f; f = d - f; d = d - f;
	}
	if (e > f)
	{
		e = e + f; f = e - f; e = e - f;
	}
	if (a == d && b == e && c == f)
	{
		printf("Boxes are equal\n");
	}
	else if (a <= d && b <= e && c <= f)
	{
		printf("The first box is smaller than the second one\n");
	}
	else if (d <= a && e <= b && f <= c)
	{
		printf("The first box is larger than the second one\n");
	}
	else
	{
		printf("Boxes are incomparable\n");
	}
	return 0;
}