#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_LEN 100

int main() {
    char str[MAX_LEN];
    int tomb[MAX_LEN];
    int count = 0;
    int i = 0;

    printf("Adj meg szavakat * vegjelig: \n");

    while (1) {
        printf("Szo: ");
        fgets(str, MAX_LEN, stdin);
        if (str[0] == '*') {
            break;
        }
        tomb[i] = strlen(str) - 1;
        i++;
        count++;
    }

    int max = tomb[0];
    for (int j=0; j<i; j++) {
        max = fmax(max, tomb[j]);
    }

    printf("%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", count, max);

    return 0;
}
