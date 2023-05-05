#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int main(int argc, char* argv[]) {
    if (argc == 1) {
        printf("Nem adtál meg egyetlen szót sem!\n");
        exit(1);
    }

    int min_hossz = strlen(argv[1]);
    char legrovidebb[MAX_LENGTH];
    strcpy(legrovidebb, argv[1]);

    for (int i = 2; i < argc; i++) {
        int hossz = strlen(argv[i]);
        if (hossz == min_hossz) {
            if (strlen(legrovidebb) + 1 + hossz < MAX_LENGTH) {
                strcat(legrovidebb, "\n");
                strcat(legrovidebb, argv[i]);
            }
        } else if (hossz < min_hossz) {
            min_hossz = hossz;
            strcpy(legrovidebb, argv[i]);
        }
    }

    printf("%s\n", legrovidebb);

    return 0;
}
