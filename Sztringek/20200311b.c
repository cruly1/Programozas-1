#include <stdio.h>

int my_strlen(const char* s) {
    int res = 0;

    for (int i=0; s[i]!='\0'; i++) {
        res++;
    }

    return res;
}

int main() {
    printf("Abba -> %d\n", my_strlen("Abba"));

    return 0;
}
