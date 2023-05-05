#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int result;
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (argc==3) {
        result = num1 + num2;
    } else {
        printf("Hiba! Két paramétert (számot) kell megadni.\n");
        exit(1);
    }
    printf("%d\n", result);

    return 0;
}
