#include <stdio.h>
#include <stdlib.h>

void snake(int n, int (*m)[n]);

int main() {
    int n;
    scanf("%d", &n);
    int m[n][n];
    for (int i = 0; i != n; ++i) {
   	for (int j = 0; j != n; ++j) {
            scanf("%d", &m[i][j]);
	}
    }
    snake( n, (int (*)[n]) m);
    putchar('\n');
    return 0;
}

void snake(int n, int (*m)[n]) {
    int k, i, j, g, p, f;
    i = n - 1;
    j = n - 1;
    p = 2;
    f = 0;
    g = 1;
    printf("%d ", m[i][j]);
    while (p != 1) {
        if (f == 0) {
            if (g == 2) {
                    i = i - 1;
                    printf("%d ", m[i][j]);
            }
            else {
                    j = j - 1;
                    printf("%d ", m[i][j]);
            }
        } 
        else {
            if (g == 1) {
                    i = i - 1;
                    printf("%d ", m[i][j]);
            }
            else {
                    j = j - 1;
                    printf("%d ", m[i][j]);
            }
        } 
        for (int s = 1; s != p; s++) {
            if (g == 2) {
                i = i + 1;
                j = j - 1;
            }
            else {
                j = j + 1;
                i = i - 1;
            }
            printf("%d ", m[i][j]);
        }
        if (g == 1) {
            g = 2;
        }
        else {
            g = 1;
        }
        if (p == n) {
            f = 1;
        }
        if (f == 0) {
            p = p + 1;
        }
        else {
            p = p - 1;
        }
    }
    printf("%d ", m[0][0]);
}
