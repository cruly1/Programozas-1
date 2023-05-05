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

int fo_es_mellekatlo_osszege(int n, int matrix[n][n]) {
    int osszeg = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) {
                osszeg += matrix[i][j];
            } else if (i+j+1==n) {
                osszeg += matrix[i][j];
            }
        }
    }

    return osszeg;
}

int main() {
    srand(time(NULL));
    int matrix[N][N];
    feltolt_random(N, matrix);
    kiir(N, matrix);
    puts("");
    int result = fo_es_mellekatlo_osszege(N, matrix);
    printf("%d\n", result);

    return 0;
}
