#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strong_password(char* jelszo) {
    int hossz = strlen(jelszo);
    int upper = 0, lower = 0, digit = 0;
    for (int i=0; i<hossz; i++) {
        if (hossz<8) {
            return 0;
        }
        else if (isupper(jelszo[i])) {
            upper = 1;
        } else if (islower(jelszo[i])) {
            lower = 1;
        } else if (isdigit(jelszo[i])) {
            digit = 1;
        }
    }
    if (upper && lower && digit) {
        return 1;
    }
    return 0;
}

int main() {
    printf("Adj meg jelszavakat '*' végjelig!");
    char* jelszo;

    while (1) {
        printf("jelszó: ");
        scanf("%s", jelszo);

        if (strcmp(jelszo, "*") == 0) {
            break;
        }

        int strong = strong_password(jelszo);

        if (strong) {
            printf("eros jelszo\n");
        } else {
            printf("gyenge jelszo\n");
        }
        puts("");
    }

    return 0;
}
