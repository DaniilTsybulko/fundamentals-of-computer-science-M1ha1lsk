#include <stdio.h>
#include <math.h>

int main() {
    int n, k, min;
    scanf("%d", &n);
    scanf("%d", &k);
    for (int i = k - 1; i != 0; i--) {
        if (n % i == 0) {
            min = i + n * k / i;
            printf("%d\n", min);
            break;
        }
    }
    return 0;
}
