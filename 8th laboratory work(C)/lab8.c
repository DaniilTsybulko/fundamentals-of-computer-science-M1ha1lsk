#include <stdio.h>
#include <math.h>

int main() {
double weight, watt;
watt = 349.88;
weight = 72.3;
double p = pow(weight,0.6666667);
double index = watt/p;
printf("%lf", index);
return 0;
}
