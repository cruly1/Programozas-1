#include <stdio.h>
#include <string.h>

int rfind_char(const char* s, char c) {
    int hossz = strlen(s);
    for (int i=hossz; i>0 ; i--) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int main() {
    printf("%d\n", rfind_char("Abba", 'b'));

    return 0;
}
