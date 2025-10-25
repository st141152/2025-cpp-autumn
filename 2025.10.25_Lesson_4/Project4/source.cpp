#include<cstdio>
#include<cmath>
#define SIZE 1001

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[SIZE] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int x = 0;
	scanf_s("%d", &x);
	int c = arr[0];
	int d = abs(arr[0] - x);
	for (int i = 1; i < n; i++)
	{
		int t = abs(arr[i] - x);

		if (t < d)
		{
			d = t;
			c = arr[i];
		}
		else if (t == d)
		{
			if (arr[i] < c)
			{
				c = arr[i];
			}
		}
	}
	printf("%d", c);
	return 0;
}