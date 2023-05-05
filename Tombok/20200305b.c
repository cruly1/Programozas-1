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
    int t[] = {41, 74, 1, 5, 155, 16, 14, 12, 75, 414, 7551, 123};
    int hossz = sizeof(t)/sizeof(t[0]);

    tomb_rendezett(t, hossz);

    printf("A tomb legkisebb eleme: %d\n", t[0]);
    printf("A tomb legnagyobb eleme: %d\n", t[hossz-1]);

    return 0;
}