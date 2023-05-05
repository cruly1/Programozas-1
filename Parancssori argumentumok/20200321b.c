#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
        if (argc==1) {
            printf("Hello World!\n");
        } else if (strcmp(argv[1], "Batman")==0 || strcmp(argv[1], "Robin")==0) {
            printf("Deneverveszely!\n");
        } else if (argc==2) {
            printf("Hello %s!\n", argv[1]);
        } else {
            printf("Hiba! Maximum egy paraméter adható meg!\n");
            exit(1);
        }

    return 0;
}
