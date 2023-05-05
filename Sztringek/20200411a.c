#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS_MAX_LEN 12
#define PASS_MIN_LEN 8

int main() {
    srand(time(NULL));
    int hossz = rand() % (PASS_MAX_LEN - PASS_MIN_LEN + 1) + PASS_MIN_LEN;
    char password[PASS_MAX_LEN + 1];
    const char* specials = ".,;'";

    int has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;

    while (!has_upper || !has_lower || !has_digit || !has_special) {
        for (int i=0; i<hossz; i++) {
            switch (rand() % 4) {
                case 0:
                    password[i] = rand() % 26 + 'A';
                    has_upper = 1;
                    break;
                case 1:
                    password[i] = rand() % 26 + 'a';
                    has_lower = 1;
                    break;
                case 2:
                    password[i] = rand() % 10 + '0';
                    has_digit = 1;
                    break;
                case 3:
                    password[i] = specials[rand() % 4];
                    has_special = 1;
                    break;
            }
        }
    }
    password[hossz] = '\0';

    printf("%s\n", password);

    return 0;
}
