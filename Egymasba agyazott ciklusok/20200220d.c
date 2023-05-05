#include <stdio.h>

int main() {
    int magassag;
    printf("magassag: ");
    scanf("%d", &magassag);
    puts("");

    for (int i=0; i<magassag; i++) {
        for (int j=0; j<=i; j++) {
            printf("#");
        }
        puts("");
    }

    return 0;
}
