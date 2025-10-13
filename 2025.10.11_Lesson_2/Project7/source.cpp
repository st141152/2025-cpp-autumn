#include<cstdio>

int main(int argc, char** argv)
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
	if (x2 != x1)
	{
		printf("NO\n");
	}
	else if (y2 - y1 == 1)
	{
		printf("YES\n");
	}
	else if (y1 == 2 && y2 - y1 == 2)
	{
		printf("YES\n");
	}
	else if (y1 != 2 && y2 - y1 >= 2)
	{
		printf("NO\n");
	}
	else if (x2 - x1 > 1)
	{
		printf("NO\n");
	}
	return 0;
}