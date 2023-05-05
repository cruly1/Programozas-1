#include <stdio.h>
#include <stdlib.h>

#define MAX 300

int main() {
    char sorok[MAX];
    char* fajlnev = "in.txt";
    char* masikfajl = "out.txt";
    double szam;
    int ctr = 0;

    FILE *fp = fopen(fajlnev, "r");
    if (fp == NULL) {
        printf("Hiba a(z) %s nevu fajl megnyitasa soran.\n", fajlnev);
        exit(1);
    }
    printf("# %s sikeresen megnyitva\n", fajlnev);

    FILE *fp2 = fopen(masikfajl, "w");
    if (fp2 == NULL) {
        printf("Hiba a(z) %s nevu fajl megnyitasa soran.\n", masikfajl);
        fclose(fp);
        exit(1);
    }
    printf("# %s sikeresen megnyitva\n", masikfajl);

    printf("# 0,5-nel nagyobb szamok szurese...\n");

    while(fgets(sorok, MAX, fp)!=NULL) {
        if (sscanf(sorok, "%lf", &szam) != 1) {
            printf("Hiba a(z) %s nevu fajlban. Nem szamot talaltam: %s", fajlnev, sorok);
            continue;
        }
        if (szam > 0.5) {
            fprintf(fp2, "%s", sorok);
        }
    }

    fclose(fp);
    fclose(fp2);
    printf("# szures vege\n");

    FILE *fp3 = fopen(masikfajl, "r");
    if (fp3 == NULL) {
        printf("Hiba a(z) %s nevu fajl megnyitasa soran.\n", masikfajl);
        exit(1);
    }

    while (fgets(sorok, MAX, fp3) != NULL) {
        ctr++;
    }

    fclose(fp3);

    printf("# %s bezarva\n", masikfajl);
    printf("# out.txt-be kiirt szamok mennyisege: %d\n", ctr);

    return 0;
}
