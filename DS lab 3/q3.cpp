#include <stdio.h>

int logicaland(int x, int y) {
    return x && y;
}

int cond(int x, int y) {
    return y || !x;
}

int main() {
    int p[8] = {1, 1, 1, 1, 0, 0, 0, 0};
    int q[8] = {1, 1, 0, 0, 1, 1, 0, 0};
    int r[8] = {1, 0, 1, 0, 1, 0, 1, 0};

    int x1[8], x2[8], x3[8], x[8], y[8];
    int c = 0;

    printf("p\tq\tr\t!p\t!r\tp^q\t(p^q)->r\tq^!r\t(p^q)->r)^(q^!r)\t((p^q)->r)^(q^!r))->!p\n");

    for (int i = 0; i < 8; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t", p[i], q[i], r[i], !p[i], !r[i]);

        x1[i] = logicaland(p[i], q[i]);
        printf("%d\t", x1[i]);

        x2[i] = cond(x1[i], r[i]);
        printf("%d\t", x2[i]);

        x3[i] = logicaland(q[i], !r[i]);
        printf("%d\t", x3[i]);

        x[i] = logicaland(x2[i], x3[i]);
        printf("%d\t", x[i]);

        y[i] = cond(x[i], !p[i]);
        printf("%d\t", y[i]);

        if (!y[i]) {
            c++;
        }

        printf("\n");
    }

    if (c == 0) {
        printf("\nStatement is valid.\n");
    } else {
        printf("\nStatement is not valid.\n");
    }

    return 0;
}

