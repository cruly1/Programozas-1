#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 6

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

void foatlo_kiir(int n, int matrix[n][n]) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) {
                printf("%d\t", matrix[i][j]);
            }
        }
    }
    puts("");
}

int main() {
    srand(time(NULL));
    int matrix[N][N];
    feltolt_random(N, matrix);
    kiir(N, matrix);
    puts("");
    foatlo_kiir(N, matrix);

    return 0;
}
