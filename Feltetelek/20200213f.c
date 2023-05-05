#include <stdio.h>

int main() {
    int x, y;
    char muvelet;

    printf("1. szam: ");
    scanf("%d", &x);
    getchar();
    printf("muvelet: ");
    scanf("%c", &muvelet);
    printf("2. szam: ");
    scanf("%d", &y);

    if (muvelet=='+') {
        printf("Eredmeny: %d\n", x+y);
    }
    else if (muvelet=='-') {
        printf("Eredmeny: %d\n", x-y);
    }
    else if (muvelet=='*') {
        printf("Eredmeny: %d\n", x*y);
    }
    else if (muvelet=='/') {
        printf("Eredmeny: %d\n", x/y);
    }
    else {
        printf("A muvelet nem ertelmezheto!");
    }

    return 0;
}
