#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &a);
	c = 1;
	d = 1;
	do
	{
		scanf_s("%d", &b);
		if (b == 0) break;
		if (b == a)
		{
			++c;
			if (c > d)
			{
				d = c;
			}
		}
		else
		{
			c = 1;
			a = b;
		}
	} while (b != 0);
	printf("%d", d);
	return 0;
}