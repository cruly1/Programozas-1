#include <stdio.h>

int is_even(int n) {
    if (n%2==0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int x;

    printf("Adj megy egy egesz szamot: ");
    scanf("%d", &x);

    is_even(x);

    return 0;
}
