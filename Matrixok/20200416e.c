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

int foatlo_osszeg(int n, int matrix[n][n]) {
    int osszeg = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) {
                osszeg += matrix[i][j];
            }
        }
    }

    return osszeg;
}

int mellekatlo_osszeg(int n, int matrix[n][n]) {
    int osszeg = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i+j+1 == n) {
                osszeg += matrix[i][j];
            }
        }
    }

    return osszeg;
}

int melyik_a_nagyobb(int A, int B) {
    if (A<B) {
        return -1;
    } else if (A==B) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    srand(time(NULL));
    int matrix[N][N];
    feltolt_random(N, matrix);
    kiir(N, matrix);
    puts("");
    int fo_sum = foatlo_osszeg(N, matrix);
    int mellek_sum = mellekatlo_osszeg(N, matrix);
    printf("%d\n", melyik_a_nagyobb(fo_sum, mellek_sum));

    return 0;
}
