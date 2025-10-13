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
	int s1, m1, l1;  // минимальный, средний, максимальный размер первой коробки
	s1 = a;
	if (b < s1) s1 = b;
	if (c < s1) s1 = c;
	l1 = a;
	if (b > l1) l1 = b;
	if (c > l1) l1 = c;
	m1 = a + b + c - s1 - l1;
	int s2, m2, l2;
	s2 = d;
	if (e < s2) s2 = e;
	if (f < s2) s2 = f;
	l2 = d;
	if (e > l2) l2 = e;
	if (f > l2) l2 = f;
	m2 = d + e + f - s2 - l2;
	if (s1 == s2 && m1 == m2 && l1 == l2) 
	{
		printf("Boxes are equal\n");
	}
	else if (s1 <= s2 && m1 <= m2 && l1 <= l2) 
	{
		printf("The first box is smaller than the second one\n");
	}
	else if (s2 <= s1 && m2 <= m1 && l2 <= l1) 
	{
		printf("The first box is larger than the second one\n");
	}
	else 
	{
		printf("Boxes are incomparable\n");
	}

	return 0;
}