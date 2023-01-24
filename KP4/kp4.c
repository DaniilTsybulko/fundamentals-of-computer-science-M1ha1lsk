#include <stdio.h>
#include <math.h>
#include <float.h>
#include <assert.h>
#include <stdbool.h>

typedef double(*pFunc)(double);

double machineeps();
double dx1(double x);
double dx2(double x);
double sign(double x);
double dichotomy1(pFunc f, double a, double b);
double iteration1(pFunc f, double a, double b);
double newton1(pFunc f, double a, double b);
double dichotomy2(pFunc f, double a, double b);
double iteration2(pFunc f, double a, double b);
double newton2(pFunc f, double a, double b);
double func1(double x);
double func2(double x);


int main(){
    double a1 = -1.0, b1 = 0.0;
    double a2 = 2.0, b2 = 3.0;
    printf("dichotomy method result 11 variant: %f\n", dichotomy1(func1, a1, b1));
    printf("iteration method result 11 variant: %f\n", iteration1(func1, a1, b1));
    printf("newton method result 11 variant: %f\n", newton1(func1, a1, b1));
    printf("\n");
    printf("dichotomy method result 12 variant: %lf\n", dichotomy2(func2, a2, b2));
    printf("iteration method result 12 variant: %f\n", iteration2(func2, a2, b2));
    printf("newton method result 12 variant: %f\n", newton2(func2, a2, b2));
    return 0;
}

double machineeps() {
    double x = 1.0;
    double eps = 1.0;
    while (x + eps / 2.0 != x)
        eps /= 2.0;
    return eps * 2.0;
}

double dx1(double x){
    return expl(x) + 1 / (2 * sqrtl(1 + expl(2 * x))) * expl(2 * x) * 2;
}

double dx2(double x){
    return ((1 / x) - 1.0);
}

double sign(double x){
    double epsilon = machineeps();
    return x > epsilon ? 1.0 : x < -epsilon ? -1.0 : 0.0;
}

double dichotomy1(pFunc f, double a, double b){
    double epsilon = machineeps();
    double x = a + (b - a) / 2;
    while (fabsl(a-b) > epsilon){
        x = a + (b - a) / 2;
        if(f(a) * f(x) > 0.l) a = x;
        else b = x;
    }
    return x;
}

double iteration1(pFunc f, double a, double b){
    double epsilon = machineeps();
    double x = a + (b - a) / 2;
    while(fabsl(f(x)) > epsilon){
        x = x - f(x)*sign(dx1(x));
    }
    return x;
}

double newton1(pFunc f, double a, double b){
    double epsilon = machineeps();
    double x = a + (b - a) / 2;
    while(fabsl(f(x)/ dx1(x)) > epsilon){
        x = x - f(x)/dx1(x);
    }
    return x;
}

double dichotomy2(pFunc f, double a, double b) {
    double epsilon = machineeps();
    double x = a + (b - a) / 2;
    while (fabsl(a-b) > epsilon){
        x = a + (b - a) / 2;
        if(f(a) * f(x) > 0.l) a = x;
        else b = x;
    }
    return x;
}

double iteration2(pFunc f, double a, double b){
    double epsilon = machineeps();
    double x = a + (b - a) / 2;
    while(fabsl(f(x)) > epsilon){
        x = (x - f(x)*sign(dx2(x)));
    }
    return x;
}

double newton2(pFunc f, double a, double b){
    double epsilon = machineeps();
    double x = a + (b - a) / 2;
    while(fabsl(f(x)/ dx2(x)) > epsilon){
        x = x - f(x)/dx2(x);
    }
    return x;
}

double func1(double x){
    return expl(x) + sqrtl(1.0 + expl(2 * x)) - 2.0;
}

double func2(double x){
    return logl(x) - x + 1.8;
}


