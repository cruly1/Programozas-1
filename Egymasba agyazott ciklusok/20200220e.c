#include <stdio.h>

int main() {
    int magassag;
    printf("magassag: ");
    scanf("%d", &magassag);
    puts("");

    for (int i=0; i<magassag; i++) {
        for (int j=magassag-i-1; j>0; j--) {
            printf(" ");
        }

        for (int j=0; j<=i; j++) {
            printf("#");
        }
        puts("");
    }

    return 0;
}
