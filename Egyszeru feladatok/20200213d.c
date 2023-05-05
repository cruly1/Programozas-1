#include <stdio.h>
#include <math.h>

int main() {
    printf("Add meg a gomb sugarat: ");
    double r;
    scanf("%lf", &r);

    double felszin = 4 * pow(r, 2) * M_PI;
    double terfogat = 4 * pow(r, 3) * M_PI / 3;

    printf("A gomb felszine: %.2lf\n", felszin);
    printf("A gomb terfogata: %.2lf\n", terfogat);

    return 0;
}
