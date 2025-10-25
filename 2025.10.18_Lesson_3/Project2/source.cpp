#include<cstdio>

int main(int argc, char** argv)
{
	double a = 0;
	double b = 0;
	double d = 0;
	int c = 0;
	scanf_s("%lf %lf", &a, &b);
	c = 1;
	d = a;
	while (d < b - 1e-9)
	{
		d = d + d * 0.15;
		c = c + 1;
	}
	printf("%d", c);
	return 0;
}