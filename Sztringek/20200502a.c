#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 200

int hamming_distance(const char* s1, const char* s2) {
    int hossz = strlen(s1);
    int ctr = 0;
    for (int i=0; i<hossz; i++) {
        if (s1[i] != s2[i]) {
            ctr++;
        }
    }

    return ctr;
}

int main() {
    char s1[MAX];
    char s2[MAX];

    printf("Adj meg egy sztringet: ");
    fgets(s1, MAX, stdin);
    int hossz1 = strlen(s1);
    s1[hossz1 - 1] = '\0';

    printf("Adj meg egy masik sztringet: ");
    fgets(s2, MAX, stdin);
    int hossz2 = strlen(s2);
    s2[hossz2 - 1] = '\0';

    if (hossz1 != hossz2) {
        fprintf(stderr, "Hiba! A megadott ket sztring nem egyenlo hosszu!\n");
        exit(1);
    }

    printf("A ket sztring Hamming-tavolsaga: %d\n", hamming_distance(s1, s2));

    return 0;
}
