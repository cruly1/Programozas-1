#include <stdio.h>

int main() {
    printf("Adj meg egy egesz szamot: ");
    int szam;
    scanf("%d", &szam);

    if (szam % 2 == 0) {
        printf("A megadott szam paros.\n");
    } else {
        printf("A megadott szam paratlan.\n");
    }

    return 0;
}
