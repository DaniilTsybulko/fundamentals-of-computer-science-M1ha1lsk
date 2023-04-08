#include <stdio.h>
#include <math.h>

void sqrtx(int x);

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", sqrtx(x));
    return 0;
}

void sqrtx(int x) {
    int a = x / 2 + 1;
    int c = x;
    int b;
    while (a * a != x) {
        b = a;
        if (a * a < x) {
            a = a + (c - a) / 2;
        }
        else {
            c = a;
            a = a / 2 + 1;
        }
        if (a == b)
            return a;
    }
}
