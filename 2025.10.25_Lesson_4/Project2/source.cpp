#include<cstdio>
#define SIZE 1001

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[SIZE] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int l = 0;
	scanf_s("%d", &l);
	int r = 0;
	scanf_s("%d", &r);
	int m = arr[l];
	int p = l;
	for (int i = l + 1; i <= r; i++)
	{
		if (arr[i] > m)
		{
			m = arr[i];
			p = i;
		}
	}
	printf("%d %d", m, p);
	return 0;
}