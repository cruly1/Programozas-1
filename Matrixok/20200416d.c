#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 6

typedef struct {
    int minimum;
    int maximum;
} MatrixElemei;

void feltolt_random(int n, int matrix[n][n]) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            matrix[i][j] = rand() % (99 - 10 + 1) + 10;
        }
    }
}

void kiir(int n, int matrix[n][n]) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        puts("");
    }
}

MatrixElemei legnagyobb_es_legkisebb(int n, int matrix[n][n], MatrixElemei *result) {
    int min = matrix[0][0];
    int max = matrix[0][0];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (matrix[i][j]<min) {
                min = matrix[i][j];
            }
            if (matrix[i][j]>max) {
                max = matrix[i][j];
            }
        }
    }

    result->minimum = min;
    result->maximum = max;

    return *result;
}

int main() {
    srand(time(NULL));
    int matrix[N][N];
    feltolt_random(N, matrix);
    kiir(N, matrix);
    puts("");
    MatrixElemei result;
    legnagyobb_es_legkisebb(N, matrix, &result);

    printf("Legkisebb elem: %d\n", result.minimum);
    printf("Legnagyobb elem: %d\n", result.maximum);

    return 0;
}
