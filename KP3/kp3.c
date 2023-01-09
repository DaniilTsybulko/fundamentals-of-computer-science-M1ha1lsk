#include <math.h>
#include <stdio.h>

typedef long double ld;

const ld k = 10e-40;
const ld a = 0.1l;
const ld b = 0.6l;
const int steps = 15;

const int max_iters = 100;

ld compute_epsilon(){
    ld eps = 1;
    while(1 < 1 + eps)
        eps /= 2;
    return eps;
}

ld inner_func(ld x){
    return (1 - powl(x,2) / 2) * cos(x) - x/2 * sin(x);
}

int factorial(long long  n){
    ld ans = 1;
    for (long long i = 2; i <= n; ++i) {
        ans *= i;
    }
    return ans;
}

ld teilor_row(ld x, int n){
    ld v = pow(-1, n);
    v *= (2 * pow(n, 2), + 1);
    v /= 2 * (ld)factorial(n);
    v *= powl(x, 2 * n);
    return v;
}


int main(){
    ld step = (b-a)/steps;

    ld eps = compute_epsilon();
    printf("Machine epsilon for long double for this system is %.20Lf\n", eps);
    printf("______________________________________________________________________________\n");
    printf("|x   | Sum                 | (1 - (x^2 / 2)) * cos(x) - (x / 2) * sin(x) |  n|\n");
    printf("|____|_____________________|_____________________________________________|___|\n");

    for(ld x = a; x < b + step; x += step){
        int n = 0;
        ld cur_member = 1;
        ld sum = 0;
        while((fabsl(cur_member) > eps * k && n < max_iters) || n == 2){
            cur_member = teilor_row(x, n);
            sum += cur_member;
            n++;
        }
        printf("|%.2Lf|%.19Lf|%.43Lf|%3d|\n", x, sum, inner_func(x), n);
    }
    printf("|____|_____________________|_____________________________________________|___|\n");
}

