#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	if ((a % 2) == 0)
	{
		printf("%d", a / 2);
	}
	else if (a == 1)
	{
		printf("0");
	}
	else
	{
		printf("%d", a);
	}
	return 0;
}