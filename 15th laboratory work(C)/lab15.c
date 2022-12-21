#include <stdio.h>

int main() {
    int n, s;
    scanf("%d", &s);
    scanf("%d", &n);
    int m[n][n];
    int r[n][n];
    for (int i = 0; i != n; ++i) {
   	for (int j = 0; j != n; ++j) {
            scanf("%d" , &m[i][j]);
	}
    }
    int dir[4] = { 1, 0, -1, 0 };
    int a[n * n - s - 1];
    int b[s - 1];
    int l = n;
    int q = 0;
    int p = 0;
    int z = 0;
    int i = 0, j = -1;
    while (l != 0) {
        for (int k = 0; k != l; k++) {
            j += dir[p % 4];
            i += dir[(p+3) % 4];
            if (q == 0) {
                a[z] = m[i][j];
                if (z == n * n - s - 1) {
                    z = -1;
                    q = 1;
                }
            }
            else {
                b[z] = m[i][j];
            }
            z++;
        }
        p++;
        l -= p % 2;
    }
    
    l = n;
    p = 0;
    q = 0;
    z = 0;
    i = 0, j = -1;
    while (l != 0) {
        for (int k = 0; k != l; k++) {
            j += dir[p % 4];
            i += dir[(p+3) % 4];
            if (q == 0) {
                r[i][j] = b[z];
                if (z == s - 1) {
                    z = -1;
                    q = 1;
                }
            }
            else {
                if (z == 0) {
                    r[i][j] = m[0][0];
                }
                else {
                    r[i][j] = a[z];
                }
            }
            z++;
        }
        p++;
        l -= p % 2;
    }

    for (int i = 0; i != n; ++i) {
   	for (int j = 0; j != n; ++j) {
            printf("%d " , r[i][j]);
	}
	printf("\n");
    }
}
