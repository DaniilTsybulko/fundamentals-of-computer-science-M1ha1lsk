#include <stdio.h>
#include <stdlib.h>

int det(int n, int (*B)[n]);
    
int main() {
    int determinant;
    int n;
    scanf("%d", &n);
    int A[n][n];
    for (int i = 0; i < n; ++i) {
   	for (int j = 0; j < n; ++j) {
            scanf("%d", &A[i][j]);
	}
    }
    
    determinant = det( n, (int (*)[n]) A);
    printf("Det = %d\n", determinant);
    return 0;
}

int det(int n, int (*B)[n]) {
    if (n == 1) {
        return B[0][0];
    }
    else if (n == 2) {
        return (B[0][0] * B[1][1] - B[0][1] * B[1][0]);
    }
    else {
        int m = n;
        int minor[m-1][n-1];
        int rm, cm, fc;
        int sum = 0;
        for (fc = 0; fc < m; fc++) {
            rm = 0;
            for (int i = 1; i < m; i++) {
                cm = 0;
                for (int j = 0; j < n; j++) {
                    if (j == fc)
                        continue;
                    else
                        minor[rm][cm] = B[i][j];
                    cm++;
                }
                rm++;
            }
            
            m = rm;
            n = cm;
            if (fc % 2 == 0)
                sum += B[0][fc] * det( n, (int (*)[n]) minor);
            else
                sum -= B[0][fc] * det( n, (int (*)[n]) minor);
        }
        return sum;
    }
}
