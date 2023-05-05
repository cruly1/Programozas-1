#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    int z;

    for (int i=1; i<=100; i++) {
        x = x + i*i;
    }

    printf("%d\n", x);

    for (int i=1; i<=100; i++) {
        y = y + i;
    }

    y = y*y;

    printf("%d\n", y);

    z = y - x;

    printf("%d\n", z);

    return 0;
}
