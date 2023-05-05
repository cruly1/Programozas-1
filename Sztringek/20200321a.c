#include <stdio.h>

void kisbetu_feltolt(char *tomb) {
    int index = 0;
    for (int i=97; i<=122; i++) {
        tomb[index] = (char) i;
        index++;
    }
    tomb[index] = '\0';
}

int main() {
    char tomb[27];
    kisbetu_feltolt(tomb);
    printf("%s\n", tomb);

    return 0;
}
