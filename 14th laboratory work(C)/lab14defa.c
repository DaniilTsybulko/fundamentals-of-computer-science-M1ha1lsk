#include <stdio.h>

int main() {
    int n, as, bs, c;
    scanf("%d", &n);
    int a[n];
    int b[n];
    c = 0;
    for (int i = 0; i != n * 2; i++) {
        if (i % 2 == 0) {
            scanf("%d", &a[i / 2]);
        }
        else {
            scanf("%d", &b[i / 2]);
        }
    }
    for (int i = 0; i != n; i++) {
        as += a[i];
        bs += b[i];
        if (a[i] % 2 != b[i] % 2) {
            c++;
        }
    }
    if ((as % 2 == 0) && (bs % 2 == 0)) {
        printf("0");
    }
    else if (c % 2 == 0 && c != 0) {
        printf("1");
    }
    else {
        printf("-1");
    }
    return 0;
}
