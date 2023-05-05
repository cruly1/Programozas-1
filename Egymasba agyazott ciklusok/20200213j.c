#include <stdio.h>

int main() {
    int magassag;

    printf("magassag: ");
    scanf("%d", &magassag);

    if (magassag % 2 == 0 || magassag <= 0) {
        printf("Hiba: a magassag ertekenek pozitiv paratlan szamnak kell lennie!\n");
    } else {
        int felso_resz = (magassag + 1) / 2;
        for (int i = 1; i <= felso_resz; i++) {
            for (int j = felso_resz; j > i; j--) {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
        for (int i = felso_resz - 1; i >= 1; i--) {
            for (int j = felso_resz; j > i; j--) {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
