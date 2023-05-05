#include <stdio.h>
#include <string.h>

int find_char(const char* s, char c) {
    int hossz = strlen(s);
    for (int i=0; i<hossz ; i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int main() {
    printf("%d\n", find_char("Abba", 'a'));

    return 0;
}
