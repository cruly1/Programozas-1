#include <stdio.h>

void tomb_rendezett(int *t, int n) {
    int seged;

    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (t[j] > t[j+1]) {
                seged = t[j];
                t[j] = t[j+1];
                t[j+1] = seged;
            }
        }
    }
}

int main() {
    int t[] = {4, 7, 2, 6, 9, 13};
    int hossz = sizeof(t) / sizeof(t[0]);

    tomb_rendezett(t, hossz);

    printf("A rendezett tomb: ");

    for (int i=0; i<hossz; i++) {
        printf(" %d", t[i]);
    }
    puts("");

    return 0;
}
