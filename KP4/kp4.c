#include <stdio.h>
#include <math.h>

typedef long double(*pFunc)(long double);


long double machineeps();
long double dx1(long double x);
long double dx2(long double x);
long double sign(long double x);
long double dichotomy1(pFunc f, long double a, long double b);
long double iteration1(pFunc f, long double a, long double b);
long double newton1(pFunc f, long double a, long double b);
long double dichotomy2(pFunc f, long double a, long double b);
long double iteration2(pFunc f, long double a, long double b);
long double newton2(pFunc f, long double a, long double b);
long double func1(long double x);
long double func2(long double x);


int main(){
    long double a1 = -1.l, b1 = 0.l;
    long double a2 = 2.l, b2 = 3.l;
    printf("dichotomy method result 11 variant: %Lf\n", dichotomy1(func1, a1, b1));
    printf("iteration method result 11 variant: %Lf\n", iteration1(func1, a1, b1));
    printf("newton method result 11 variant: %Lf\n", newton1(func1, a1, b1));
    printf("\n");
    printf("dichotomy method result 12 variant: %Lf\n", dichotomy2(func2, a2, b2));
    printf("iteration method result 12 variant: %Lf\n", iteration2(func2, a2, b2));
    printf("newton method result 12 variant: %Lf\n", newton2(func2, a2, b2));
}


long double machineeps(){
    long double eps = 1;
    while(1 < 1 + eps)
        eps /= 2;
    return eps;
}

long double dx1(long double x){
    return expl(x) + 1 / (2 * sqrtl(1 + expl(2 * x))) * expl(2 * x) * 2;
}

long double dx2(long double x){
    return ((1 / x) - 1.l);
}

long double sign(long double x){
    long double epsilon = machineeps();
    return x > epsilon ? 1.l : x < -epsilon ? -1.l : 0.l;
}

long double dichotomy1(pFunc f, long double a, long double b){
    long double epsilon = machineeps();
    long double x = (a + b) / 2;
    while (fabsl(a-b) > epsilon){
        x = (a + b) / 2;
        if(f(a) * f(x) > 0.l) a = x;
        else b = x;
    }
    return x;
}

long double iteration1(pFunc f, long double a, long double b){
    long double epsilon = machineeps();
    long double x = (a + b) / 2;
    while(fabsl(f(x)) > epsilon){
        x = x - f(x)*sign(dx1(x));
    }
    return x;
}

long double newton1(pFunc f, long double a, long double b){
    long double epsilon = machineeps();
    long double x = (a + b) / 2;
    while(fabsl(f(x)/ dx1(x)) > epsilon){
        x = x - f(x)/dx1(x);
    }
    return x;
}

long double dichotomy2(pFunc f, long double a, long double b){
    long double epsilon = machineeps();
    long double x = (a + b) / 2;
    while (fabsl(a-b) > epsilon){
        a = ceil(a * 1e+10) / 1e+10;
        b = ceil(b * 1e+10) / 1e+10;
        x = (a + b) / 2;
        if(f(a) * f(x) > 0.l) a = x;
        else b = x;
    }
    return x;
}

long double iteration2(pFunc f, long double a, long double b){
    long double epsilon = machineeps();
    long double x = (a + b) / 2;
    while(fabsl(f(x)) > epsilon){
        x = (x - f(x)*sign(dx2(x)));
    }
    return x;
}

long double newton2(pFunc f, long double a, long double b){
    long double epsilon = machineeps();
    long double x = (a + b) / 2;
    while(fabsl(f(x)/ dx2(x)) > epsilon){
        x = x - f(x)/dx2(x);
    }
    return x;
}

long double func1(long double x){
    return expl(x) + sqrtl(1.l + expl(2 * x)) - 2.l;
}

long double func2(long double x){
    long double p = logl(x) - x + 1.8l;
    p = ceil(p * 1e+10) / 1e+10;
    return p;
}


