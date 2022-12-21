#include <stdio.h>

const int N = 1e+9 + 7;
 
int main() { 
    long long int a, b, c, d;
    scanf("%lld", &a);
    while(a--) {
        d = 1;
        scanf("%lld%lld", &b, &c);
        while(c--) { 
	    d=(d * b) % N;
        }
        printf("%lld\n",d);
    }
}  
