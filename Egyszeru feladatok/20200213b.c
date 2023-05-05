#include <stdio.h>

int main() {
    printf("Add meg a teglalap magassagat: ");
    int a;
    scanf("%d", &a);

    printf("Add meg a teglalap szelesseget: ");
    int b;
    scanf("%d", &b);

    int kerulet = 2 * (a + b);
    int terulet = a * b;

    printf("A teglalap kerulete: %d\n", kerulet);
    printf("A teglalap terulete: %d\n", terulet);

    return 0;
}
