#include <stdio.h>

int check1(int p, int q, int r){
	return ((p && !q || r) <= (!p || r));
}

int check2(int p, int q, int r) {
    return ((p && !q) || r) == ((!p) || r);
}

int main() {
    int p, q, r;

    printf("p\tq\tr\t(p && !q || r) <= (!p || r)\t(p && !q || r) == (!p || r)\n");

    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                printf("%d\t%d\t%d\t\t\t%d\t\t\t\t%d\n", p, q, r, check1(p, q, r),check2(p, q, r));
            }
        }
    }
    
    return 0;
}

