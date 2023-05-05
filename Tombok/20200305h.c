#include <stdio.h>

void absolute(int *t, int n) {
    for (int i=0; i<n; i++) {
        if (t[i]<0) {
            t[i] *= -1;
        }
    }
}

int main() {
    int t[] = {3, -31, 51, -14, 6, -5};
    int n = sizeof(t)/sizeof(t[0]);

    absolute(t, n);

    for (int i=0; i<n-1; i++) {
        printf("%d, ", t[i]);
    }
    printf("%d", t[n-1]);
    puts("");

    return 0;
}
