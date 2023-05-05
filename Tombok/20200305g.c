#include <stdio.h>

void megfordit(int *tomb, int n) {
    int seged;
    for (int i=0; i<n/2; i++) {
        seged = tomb[i];
        tomb[i] = tomb[n-1-i];
        tomb[n-1-i] = seged;
    }
}

int main() {
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int hossz = sizeof(t)/sizeof(t[0]);

    megfordit(t, hossz);

    for (int i=0; i<hossz-1; i++) {
        printf("%d, ", t[i]);
    }
    printf("%d\n", t[hossz-1]);

    return 0;
}
