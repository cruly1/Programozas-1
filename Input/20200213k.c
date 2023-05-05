#include <stdio.h>

int main() {
    int szam;

    do
    {
        printf("Pozitiv egesz: ");
        scanf("%d", &szam);

        if (szam<=0) {
            printf("-> ez nem pozitiv egesz\n\n");
        }

    } while (szam<=0);

    printf("A pozitiv egesz: %d\n", szam);

    return 0;
}
