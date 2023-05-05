#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void quicksort(int a[], int bal, int jobb) {
    int x, temp;
    int i, j;

    i = bal;
    j = jobb;
    x = a[(bal + jobb) / 2];
    while (i <= j) {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            ++i;
            --j;
        }
    }

    if (bal < j)  quicksort(a, bal, j);
    if (i < jobb) quicksort(a, i, jobb);
}

int sor_counter(const char* fajlnev) {
    FILE *fp = fopen(fajlnev, "r");

    if (fp==NULL) {
        fprintf(stderr, "Hiba! Nem sikerult megnyitni a(z) %s nevu szoveges allomanyt!\n");
        exit(2);
    }

    int ctr = 0;
    char sorok[MAX];

    while (fgets(sorok, MAX, fp) != NULL) {
        ctr++;
    }

    fclose(fp);

    return ctr;
}

void kiir(int n, int tomb[]) {
    for (int i=0; i<n; i++) {
        printf("%d\n", tomb[i]);
    }
    puts("");
}

int *beolvas(const char* fajlnev, int sorok_szama) {
    int *tomb = malloc(sorok_szama * sizeof(int));
    if (tomb==NULL) {
        fprintf(stderr, "Hiba! Nem sikerult lefoglalni a kivant memoriateruletet!\n");
        exit(3);
    }

    int index = 0;

    FILE *fp = fopen(fajlnev, "r");

    if (fp==NULL) {
        fprintf(stderr, "Hiba! Nem sikerult megnyitni a(z) %s nevu szoveges allomanyt!\n");
        exit(2);
    }

    char sorok[MAX];

    while (fgets(sorok, MAX, fp) != NULL) {
        tomb[index] = atoi(sorok);
        index++;
    }

    fclose(fp);

    return tomb;
}

int main(int argc, char* argv[]) {
    if (argc!=2) {
        fprintf(stderr, "Hiba! Adj meg pontosan egy parancssori argumentumot!\n");
        exit(1);
    }

    int sorok_szama = sor_counter(argv[1]);
    int *szamok = beolvas(argv[1], sorok_szama);

    quicksort(szamok, 0, sorok_szama-1);
    kiir(sorok_szama, szamok);

    free(szamok);

    return 0;
}
