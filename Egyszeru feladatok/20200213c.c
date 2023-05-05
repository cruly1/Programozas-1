#include <stdio.h>
#include <math.h>

int main() {
    printf("Add meg a kor sugarat: ");
    double r;
    scanf("%lf", &r);

    double kerulet = 2 * r * M_PI;
    double terulet = pow(r, 2) * M_PI;

    printf("A kor kerulete: %.2lf\n", kerulet);
    printf("A kor terulete: %.2lf\n", terulet);

    return 0;
}
