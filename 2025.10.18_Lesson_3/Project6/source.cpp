#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	int c = 0;
	for (int i = 0; i < a; ++i)
	{
		int d = 0;
		scanf_s("%d", &d);
		if (d > 0)
		{
			++b;
			if (b > c)
			{
				c = b;
			}
		}
		else
		{
			b = 0;
		}
	}
	printf("%d", c);
	return 0;
}