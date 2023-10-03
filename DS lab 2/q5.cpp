#include <stdio.h>

int GCD(int a, int b, int* x, int* y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcdValue = GCD(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcdValue;
}

void linearCongruence(int a, int b, int m) {
    int x, y;
    int gcdValue = GCD(a, m, &x, &y);

    if (b % gcdValue != 0) {
        printf("No solution exists.\n");
        return;
    }

    int x0 = (x * (b / gcdValue)) % m;

    printf("The solutions to %dx = %d (mod %d) are:\n", a, b, m);
    for (int i = 0; i < gcdValue; i++) {
        int solution = (x0 + i * (m / gcdValue)) % m;
        printf("x = %d (mod %d)\n", solution, m);
    }
}

int main() {
    int a, b, m;

    printf("Enter the values of a, b, and m in ax = b (mod m): ");
    scanf("%d %d %d", &a, &b, &m);

    linearCongruence(a, b, m);

    return 0;
}

