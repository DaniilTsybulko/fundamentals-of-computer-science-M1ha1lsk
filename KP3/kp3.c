#include <math.h>
#include <stdio.h>


long double compute_epsilon();
long double inner_func(long double x);
int factorial(long long n);
long double teilor_series(long double x, int n);
void printtab(long double k, long double a, long double b, int steps, int max_iters);


int main() {
    long double k = 10e-40;
    long double a = 0.1l;
    long double b = 0.6l;
    int steps = 15;
    int max_iters = 100;
    printtab( k, a, b, steps, max_iters);
}


long double compute_epsilon(){
    long double eps = 1;
    while(1 < 1 + eps)
        eps /= 2;
    return eps;
}

long double inner_func(long double x){
    return (1 - powl(x,2) / 2) * cos(x) - x/2 * sin(x);
}

int factorial(long long n){
    long double ans = 1;
    for (long long i = 2; i <= n; ++i) {
        ans *= i;
    }
    return ans;
}

long double teilor_series(long double x, int n){
    long double v = pow(-1, n);
    v *= (2 * n * n + 1);
    v /= 2 * (long double)factorial(n);
    v *= powl(x, 2 * n);
    return v;
}

void printtab(long double k, long double a, long double b, int steps, int max_iters){
    long double step = (b-a)/steps;
    long double eps = compute_epsilon();
    printf("Machine epsilon for long double for this system is %.20Lf\n", eps);
    printf("______________________________________________________________________________\n");
    printf("|x   | Sum                 | (1 - (x^2 / 2)) * cos(x) - (x / 2) * sin(x) |  n|\n");
    printf("|____|_____________________|_____________________________________________|___|\n");

    for(long double x = a; x < b + step; x += step){
        int n = 0;
        long double cur_member = 1;
        long double sum = 0;
        while((fabsl(cur_member) > eps * k && n < max_iters) || n == 2){
            cur_member = teilor_series(x, n);
            sum += cur_member;
            n++;
        }
        printf("|%.2Lf|%.19Lf|%.43Lf|%3d|\n", x, sum, inner_func(x), n);
    }
    printf("|____|_____________________|_____________________________________________|___|\n");
}


