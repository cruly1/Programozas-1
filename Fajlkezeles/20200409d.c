#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX 200

int main() {
    char* fajlnev = "valos_szamok.txt";
    char sorok[MAX];
    double res = 0;

    setlocale(LC_NUMERIC, "hu_HU.UTF-8");

    FILE *fp = fopen(fajlnev, "r");

    if (fp==NULL) {
        printf("Hiba! Nem sikerult megnyitni a %s nevu fajlt!\n", fajlnev);
        exit(1);
    }

    while (fgets(sorok, MAX, fp)!=NULL) {
        res += atof(sorok);
    }

    fclose(fp);

    printf("%.20lf\n", res);

    return 0;
}
