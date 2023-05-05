#include <stdio.h>
#include <stdlib.h>

#define MAX 2000

void rendez(int meret, int tomb[]) {
    int tmp;
    for (int i=0; i<meret; i++) {
        for (int j=0; j<meret; j++) {
            if (tomb[i]<tomb[j]) {
                tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            }
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc!=2) {
        printf("Hiba! Nem adtad meg, vagy helytelenul adtad meg a file nevet!\n");
        exit(1);
    }

    char* fajlnev = argv[1];
    char sorok[MAX];
    int sorok_szama = 0;

    FILE *fp = fopen(fajlnev, "r");

    if (fp==NULL) {
        printf("Hiba! Nem sikerult megnyitni a %s nevu fajlt!\n", fajlnev);
        exit(1);
    }

    while(fgets(sorok, MAX, fp) != NULL) {
        sorok_szama++;
    }

    int i = 0;
    int tomb[sorok_szama];

    fseek(fp, 0, SEEK_SET);

    while (fgets(sorok, MAX, fp) != NULL) {
        tomb[i] = atoi(sorok);
        i++;
    }

    rendez(sorok_szama, tomb);

    for (i=0; i<sorok_szama; i++) {
        printf("%d\n", tomb[i]);
    }

    fclose(fp);

    return 0;
}
