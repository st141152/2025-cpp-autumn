#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	// Проверка все ли нули
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("0");
				return 0;
			}
		}
	}

	// Вывод постоянного члена a
	if (a != 0) {
		printf("%d", a);
	}

	// Вывод члена с x (b)
	if (b != 0) {
		// Проверка нужно ли ставить плюс
		if (b > 0) {
			if (a != 0) {
				printf("+");
			}
		}

		// Вывод коэффициента и x
		if (b == -1) {
			printf("-x");
		}
		else {
			if (b == 1) {
				printf("x");
			}
			else {
				printf("%dx", b);
			}
		}
	}

	// Вывод члена с y (c)
	if (c != 0) {
		// Проверка нужно ли ставить плюс
		if (c > 0) {
			if (a != 0) {
				printf("+");
			}
			else {
				if (b != 0) {
					printf("+");
				}
			}
		}

		// Вывод коэффициента и y
		if (c == -1) {
			printf("-y");
		}
		else {
			if (c == 1) {
				printf("y");
			}
			else {
				printf("%dy", c);
			}
		}
	}

	printf("\n");
	return 0;
}