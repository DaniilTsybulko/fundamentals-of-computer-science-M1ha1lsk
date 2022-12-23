#include <stdio.h>

const int N = 1e+9 + 7;
 
int main() { 
    long long int a, b, c, d;
    scanf("%lld", &a);
    while(a != 0) {
        d = 1;
        scanf("%lld%lld", &b, &c);
        while(c != 0) { 
	    d=(d * b) % N;
	    c--;
        }
        printf("%lld\n",d);
        a--;
    }
}  
