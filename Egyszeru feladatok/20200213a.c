#include <stdio.h>
#include <math.h>

int main() {
    printf("Add meg a negyzet oldalanak hosszat: ");
    int a;
    scanf("%d", &a);

    int kerulet = 4 * a;
    int terulet = pow(a, 2);

    printf("A negyzet kerulete: %d\n", kerulet);
    printf("A negyzet terulete: %d\n", terulet);

    return 0;
}
