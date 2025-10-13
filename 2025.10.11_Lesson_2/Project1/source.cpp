#include <stdio.h>
#include <math.h>

int main() {
    int b1, t1, t2, b2, m, n, k = 0;
    char a1, a2;
    scanf_s("%c%d\n", &a1, &b1);
    t1 = a1;
    scanf_s("%c%d", &a2, &b2);
    t2 = a2;

    if ((t1 == t2) || (b1 == b2)) {
        printf("Rook\n");
        k = 1;
    }

    n = t1 - t2;
    if (n < 0) n = n * (-1);
    m = b1 - b2;
    if (m < 0) m = m * (-1);

    if (n == m) {
        printf("Bishop\n");
        k = 1;
    }

    if (((t2 == t1 + 1) && (b2 == b1 + 2)) ||
        ((t2 == t1 + 2) && (b2 == b1 + 1)) ||
        ((t2 == t1 - 1) && (b2 == b1 + 2)) ||
        ((t2 == t1 - 2) && (b2 == b1 + 1)) ||
        ((t2 == t1 - 1) && (b2 == b1 - 2)) ||
        ((t2 == t1 - 2) && (b2 == b1 - 1)) ||
        ((t2 == t1 + 1) && (b2 == b1 - 2)) ||
        ((t2 == t1 + 2) && (b2 == b1 - 1))) {
        printf("Knight\n");
        k = 1;
    }

    if (((t1 == t2) || (b1 == b2)) || (n == m)) {
        printf("Queen\n");
        k = 1;
    }

    if (((t2 == t1 + 1) && (b1 == b2)) ||
        ((t2 == t1 - 1) && (b1 == b2)) ||
        ((b2 == b1 + 1) && (t1 == t2)) ||
        ((b2 == b1 - 1) && (t1 == t2)) ||
        ((t2 == t1 + 1) && (b2 == b1 + 1)) ||
        ((t2 == t1 - 1) && (b2 == b1 + 1)) ||
        ((t2 == t1 - 1) && (b2 == b1 - 1)) ||
        ((t2 == t1 + 1) && (b2 == b1 - 1))) {
        printf("King\n");
        k = 1;
    }

    if (t1 == t2 && b1 != 1) {
        if ((b1 == 2 && b1 + 2 == b2) || (b1 + 1 == b2)) {
            printf("Pawn\n");
            k = 1;
        }
    }

    if (k == 0)
        printf("Nobody");

    return 0;
}