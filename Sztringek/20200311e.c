#include <stdio.h>
#include <string.h>

int contains_char(const char* s, char c) {
    int hossz = strlen(s);
    for (int i=0; i<hossz ; i++) {
        if (s[i] == c) {
            return 1;
        }
    }
    return 0;
}

int main() {
    printf("%d\n", contains_char("Abba", 'x'));

    return 0;
}
