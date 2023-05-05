#include <stdio.h>

void vonal(char c, int length) {
    for (int i=0; i<length; i++) {
        printf("%c", c);
    }
    puts("");
}

int main() {
    printf("hello\n");
    vonal('-', 49);
    printf("world\n");

    return 0;
}
