#include <stdio.h>

void elvalasztas(int *tomb, int n) {
    for (int i=0; i<n-1; i++) {
        printf("%d, ", tomb[i]);
    }
    printf("%d\n", tomb[n-1]);
}

int main() {
    int t[] = {4, 7, 34, 23, 67};
    int hossz = sizeof(t)/sizeof(t[0]);

    elvalasztas(t, hossz);

    return 0;
}
