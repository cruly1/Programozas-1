#include <stdio.h>

int main() {
    int szam;
    int counter = 0;

    while (1) {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);

        if (szam == 0) {
            break;
        }

        if (szam > 0) {
            counter++;
        }
    }
    puts("");

    printf("Pozitiv elemek szama: %d\n", counter);

    return 0;
}
