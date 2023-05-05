#include <stdio.h>

int main() {
    int szam;
    int poz_counter = 0;
    int neg_counter = 0;

    while (1) {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);

        if (szam == 0) {
            break;
        }

        if (szam > 0) {
            poz_counter++;
        } else {
            neg_counter++;
        }
    }
    puts("");

    printf("Pozitiv elemek szama: %d\n", poz_counter);
    printf("Negativ elemek szama: %d\n", neg_counter);

    return 0;
}
