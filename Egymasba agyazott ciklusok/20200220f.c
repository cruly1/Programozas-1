#include <stdio.h>

int main() {
    int magassag;

    do {
        printf("magassag: ");
        scanf("%d", &magassag);
    } while (magassag<=0);

    puts("");

    if (magassag==1) {
        printf("#\n");
    }
    else {
        for (int i=0; i<magassag; i++) {
            for (int j=0; j<magassag-i; j++) {
                printf(" ");
            }

            for (int j=0; j<=i; j++) {
                printf("#");
            }

            for (int j=0; j<i; j++) {
                printf("#");
            }

            puts("");
        }
    }

    return 0;
}
