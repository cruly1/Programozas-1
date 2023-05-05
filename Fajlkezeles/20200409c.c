#include <stdio.h>
#include <stdlib.h>

#define MAX 300

int get_number_of_lines(FILE *fp, char sorok[MAX]) {
    int ctr = 0;
    while (fgets(sorok, MAX, fp)!=NULL) {
        ctr++;
    }

    return ctr;
}

int main(int argc, char* argv[]) {
    if (argc!=2) {
        printf("Hiba! Adja meg a szoveges allomany nevet!\n");
        exit(1);
    }

    char sorok[MAX];

    FILE *fp = fopen(argv[1], "r");

    if (fp==NULL) {
        printf("Hiba! A %s nevu fajlt nem sikerult megnyitni!\n", argv[1]);
        exit(2);
    }

    int result = get_number_of_lines(fp, sorok);

    fclose(fp);

    printf("%d\n", result);

    return 0;
}
