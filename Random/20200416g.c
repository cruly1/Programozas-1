#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[]) {
    int seged, tmp;
    for (int i=0; i<n; i++) {
        seged = rand() % (i+1);
        tmp = tomb[i];
        tomb[i] = tomb[seged];
        tomb[seged] = tmp;
    }
}

int main() {
    srand(time(NULL));
    int tomb[] = { 17, 8, 29, 44, 53, 12, 6, 41, 22, 37, 19, 10, 31, 26, 48 };
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    printf("Eredeti sorrend: ");
    for (int i=0; i<meret; i++) {
        if (i==0) {
            printf("%d", tomb[i]);
        } else {
            printf(", %d", tomb[i]);
        }
    }
    puts("");

    shuffle(meret, tomb);

    printf("Uj sorrend: ");
    for (int i=0; i<meret; i++) {
        if (i==0) {
            printf("%d", tomb[i]);
        } else {
            printf(", %d", tomb[i]);
        }
    }
    puts("");


    return 0;
}
