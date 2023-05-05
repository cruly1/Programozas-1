#include <stdio.h>

int main() {
    int magassag;
    printf("magassag: ");
    scanf("%d", &magassag);
    puts("");

    for (int i=1; i<=magassag; i++) {
        for (int j=0; j<magassag-i; j++) {
            printf(" ");
        }
        for (int k=0; k<i; k++) {
            printf("#");
        }
        printf("  ");
        for (int k=0; k<i; k++) {
            printf("#");
        }
        for (int j=0; j<magassag-i; j++) {
            printf(" ");
        }
        puts("");
    }

    return 0;
}
