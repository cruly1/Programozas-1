#include <stdio.h>

int main() {
    int szam1, szam2;

    printf("Adj meg egy egesz szamot: ");
    scanf("%d", &szam1);

    printf("Adj meg egy masik egesz szamot: ");
    scanf("%d", &szam2);

    if (szam1>szam2) {
        printf(">\n");
    } else if (szam1<szam2) {
        printf("<\n");
    } else {
        printf("=\n");
    }

    return 0;
}
