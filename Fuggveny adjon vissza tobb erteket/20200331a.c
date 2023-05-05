#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void feltolt_random(int n, int tomb[]) {
    for (int i=0; i<n; i++) {
        tomb[i] = rand() % (90 - 10 + 1) + 10;
    }
}

void kiir(int n, int tomb[]) {
    printf("A tomb elemei: ");
    for (int i=0; i<n; i++) {
        if (i==0) {
            printf("%d", tomb[i]);
        } else {
            printf(", %d", tomb[i]);
        }
    }
    puts("");
}

void visszaad_tobb_erteket(int n, int tomb[], int *min, int *max, double *avg) {
    *min = tomb[0];
    *max = tomb[0];
    int counter = 0;

    for (int i=0; i<n; i++) {
        if (tomb[i] < *min) {
            *min = tomb[i];
        }
        if (tomb[i] > *max) {
            *max = tomb[i];
        }
        counter += tomb[i];
    }

    *avg = (double)counter / n;
}

int main() {
    srand(time(NULL));
    int tomb[SIZE];
    int minimum, maximum;
    double atlag;
    feltolt_random(SIZE, tomb);
    kiir(SIZE, tomb);
    visszaad_tobb_erteket(SIZE, tomb, &minimum, &maximum, &atlag);

    printf("Legkisebb elem: %d\n", minimum);
    printf("Legnagyobb elem: %d\n", maximum);
    printf("Az elemek atlaga: %.2lf\n", atlag);

    return 0;
}
