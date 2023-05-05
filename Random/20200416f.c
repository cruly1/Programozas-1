#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[]) {
    int random_index = rand() % n;

    return tomb[random_index];
}

int main() {
    srand(time(NULL));
    int tomb[] = { 17, 8, 29, 44, 53, 12, 6, 41, 22, 37, 19, 10, 31, 26, 48 };
    int meret = sizeof(tomb) / sizeof(tomb[0]);
    int res = choice(meret, tomb);
    printf("%d\n", res);

    return 0;
}
