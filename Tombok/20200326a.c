#include <stdio.h>

int main() {
    printf("Hány db számot szeretnél bevinni?\n");
    int hossz;
    scanf("%d", &hossz);
    int tomb[hossz];
    int tomb_masolat[hossz];

    for (int i=1; i<=hossz; i++) {
        printf("%d. szám: ", i);
        scanf("%d", &tomb[i-1]);
    }

    for (int i=0; i<hossz; i++) {
        if (tomb[i]<0) {
            tomb_masolat[i] = -tomb[i];
        } else {
            tomb_masolat[i] = tomb[i];
        }
    }

    printf("A bevitt számok abszolútértékei: ");
    for (int i=0; i<hossz; i++) {
        if (i==hossz-1) {
            printf("%d\n", tomb_masolat[i]);
        } else {
            printf("%d, ", tomb_masolat[i]);
        }
    }

    printf("A megadott számok: ");
    for (int i=0; i<hossz; i++) {
        if (i==hossz-1) {
            printf("%d\n", tomb[i]);
        } else {
            printf("%d, ", tomb[i]);
        }
    }

    return 0;
}
