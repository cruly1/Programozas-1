#include <stdio.h>
#include <stdlib.h>

int main() {
    int szam;
    int counter = 0;
    int darabszam = 0;
    double avg;

    while (1) {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);

        if (szam == 0 && darabszam == 0) {
            fprintf(stderr, "Hiba: legalabb egy db szamot meg kell adni!\n");
            exit(1);
        } else if (szam == 0) {
            break;
        }

        if (szam>0) {
            counter += szam;
            darabszam++;
        }
    }
    puts("");

    avg = (double)counter / (double)darabszam;

    printf("A pozitiv szamok atlaga: %.2lf\n", avg);

    return 0;
}
