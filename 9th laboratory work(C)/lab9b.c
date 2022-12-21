#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    float x, y;
} Point;

typedef struct {
    float x;
    float y;
    float r;
} Round;

float sign(float x) {
	if (x > 0) {
	return 1;
	}
	if (x = 0) {
	return 0;
	}
	if (x < 0) {
	return -1;
	}
}
	
float max(float x, float y) {
	if (x >= y) {
	return x;
	}
	else {
	return y;
	}
}
	
	
bool inside(Round z, Point q){
    return ((pow((q.x - z.x), 2) + pow((q.y - z.y), 2) <= pow(z.r, 2)) ? true : false);
}

bool is_in_round(Round a, Round b, Point p) {
    return((inside(a, p) && inside(b, p)) ? true : false);
}

void main() {
    float i, j, l, v, b, n;
    int k;
    bool g;
    float x_input, y_input;
    scanf("%f", &x_input);
    scanf("%f", &y_input);
    
    Point x = {.x = x_input, .y = y_input};
    Round m = {.x = -10, .y = -10, .r = 10};
    Round s = {.x = -20, .y = -20, .r = 10};
    
    g = false;
    i = x.x;
    j = x.y;
    l = 4;
    for (k = 1; k < 51; k++) {
    v = i;
    b = j;
    n = l;
    i = v / 3 - abs(v - k) * sign(n - b);
    j = fmod(b, 10) - fmod(max(v, n), 10);
    l = v + b * fmod(k , 5) + n / 5 + 3;
    Point x = {.x = i, .y = j};
    if (is_in_round(m, s, x) == true) {
    printf("%f " "%f " "%d\n", i, j, k);
    g = true;
    break;
    }
    }
    if (g == false) {
    printf("Nope)\n");
    }
}
