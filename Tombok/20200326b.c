#include <stdio.h>

#define MAX 100

void tombRendezes(int *tomb, int hossz) {
    int tmp;
    for (int i=0; i<hossz-1; i++) {
        for (int j=i+1; j<hossz; j++) {
            if (tomb[j] < tomb[i]) {
                tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            }
        }
    }
}

int kulonbozoSzamok(int *tomb, int hossz) {
    int ctr = 0;
    for (int i = 0; i < hossz; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (tomb[j] == tomb[i]) {
                break;
            }
        }
        if (j == i && tomb[i] != 0) {
            ctr++;
        }
    }
    return ctr;
}

int main() {
    int num;
    int hossz = 0;
    int tomb[MAX] = {};

    do {
        printf("Szám: ");
        scanf("%d", &num);

        if (num==0) {
            break;
        } else if (num>99 || num<1) {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
        } else {
            tomb[hossz] = num;
            hossz++;
        }
    } while (num!=0);

    tombRendezes(tomb, hossz);

    puts("");
    printf("%d db különböző szám lett megadva.\n", kulonbozoSzamok(tomb, hossz));
    printf("Ezek (növekvő sorrendben): ");
    for (int i=0; i<hossz; i++) {
        if (tomb[i] == 0) {
            continue;
        }
        if (i > 0 && tomb[i] == tomb[i-1]) {
            continue;
        }
        printf("%d ", tomb[i]);
    }
    printf("\n");

    return 0;
}
