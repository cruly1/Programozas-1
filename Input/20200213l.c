#include <stdio.h>

int main() {
    int szam;
    int counter = 0;

    while (1) {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);

        if (szam==0) {
            break;
        }

        counter++;
    }
    puts("");

    printf("Elemek szama: %d\n", counter);

    return 0;
}
