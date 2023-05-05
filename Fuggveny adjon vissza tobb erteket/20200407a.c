#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

typedef struct {
    int min;
    int max;
    double avg;
} MinMaxAvg;

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

MinMaxAvg visszaad_tobb_erteket(int n, int tomb[], MinMaxAvg result) {
    int counter = 0;
    result.min = tomb[0];
    result.max = tomb[0];

    for (int i=0; i<n; i++) {
        if (tomb[i]<result.min) {
            result.min = tomb[i];
        }
        if (tomb[i]>result.max) {
            result.max = tomb[i];
        }
        counter += tomb[i];
    }

    result.avg = (double)counter / n;

    return result;
}

int main() {
    srand(time(NULL));
    int tomb[SIZE];
    feltolt_random(SIZE, tomb);
    kiir(SIZE, tomb);

    MinMaxAvg result = visszaad_tobb_erteket(SIZE, tomb, result);

    printf("Legkisebb elem: %d\n", result.min);
    printf("Legnagyobb elem: %d\n", result.max);
    printf("Az elemek atlaga: %.2lf\n", result.avg);

    return 0;
}
