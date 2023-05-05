#include <stdio.h>
#include <string.h>

int is_palindrome(const char* s) {
    int x = strlen(s) - 1;
    int i = 0;
    while (x>=i) {
        if (s[i] != s[x]) {
            return 0;
        } else {
            i++;
            x--;
        }
    }
    return 1;
}

int main() {
    printf("%d\n", is_palindrome("abba"));

    return 0;
}
