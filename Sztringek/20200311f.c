#include <stdio.h>
#include <string.h>

int char_count(char* s, char c) {
    int hossz = strlen(s);
    int darabszam = 0;
    for (int i=0; i<hossz ; i++) {
        if (s[i] == c) {
            darabszam++;
        }
    }
    return darabszam;
}

int main() {
    printf("%d\n", char_count("Abba", 'b'));

    return 0;
}
