#include<cstdio>
#define SIZE 1000

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
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			k++;
		}
	}
	printf("%d", k);
	return 0;
}