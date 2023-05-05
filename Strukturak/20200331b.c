#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Pont;

double distance(Pont p1, Pont p2) {
    double x_dis = p1.x - p2.x;
    double y_dis = p1.y - p2.y;

    double res = sqrt(pow(x_dis, 2) + pow(y_dis, 2));

    return res;
}

int main() {
    Pont a = { 1, 2 };
    Pont b = { 6, 5 };

    printf("A két pont közti távolság: %lf\n", distance(a, b));

    return 0;
}