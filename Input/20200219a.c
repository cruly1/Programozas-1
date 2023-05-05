#include <stdio.h>

int main() {
    int szam;
    int osszeg = 0;

    while (1) {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);

        if (szam == 0) {
            break;
        }

        osszeg += szam;
    }
    puts("");

    printf("Elemek osszege: %d\n", osszeg);

    return 0;
}
