#include <math.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_ITER 20

typedef unsigned uint;
typedef double dbl;
typedef long double ldbl;

dbl epsilon();

dbl TaylorSeries(dbl x);

void tabulation(dbl a, dbl b, uint n);

int main() {
    dbl a = 0.1;
    dbl b = 0.6;
    dbl epss = epsilon();
    printf("dbl epsilon is %.20e\n", epss);
    tabulation(a, b, 20);
    return 0;
}

void tabulation(const dbl a, const dbl b, const uint n) {
    const dbl delta = (b - a) / n;
    for (uint i = 0; i <= n; ++i) {
        const dbl x = a + i * delta;
        printf("%.6f %.15f %.15f\n", x, (1 - (x * x / 2)) * cos(x) - (x / 2) * sin(x), TaylorSeries(x));
    }
}


dbl epsilon() {
    dbl x = 1.0;
    dbl eps = 1.0;
    while (x + eps / 2.0 != x)
        eps /= 2.0;
    return eps;
}

dbl TaylorSeries(const dbl x) {
    dbl result = 1.0, member = 1.0;
    for (uint n = 1; n < MAX_ITER; ++n) {
        member *= -1.0 * (2.0 * n * n + 1.0) / (4.0 * n * n * n - 10.0 * n * n + 10.0 * n - 3.0) * x * x / (2.0 * n);
        result += member;
    }
    return result;
}
