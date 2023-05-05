#include <stdio.h>

int valid_triangle(int x, int y, int z) {
    if (x<=0 || y<=0 || z<=0) {
        return -1;
    }
    else {
        if (x+y>z && y+z>x && z+x>y) {
            return 0;
        }
        else {
            return 1;
        }
    }
}

int main() {
    int a;
    int b;
    int c;

    printf("Add meg a haromszog 'a' oldalat: ");
    scanf("%d", &a);
    printf("Add meg a haromszog 'b' oldalat: ");
    scanf("%d", &b);
    printf("Add meg a haromszog 'c' oldalat: ");
    scanf("%d", &c);

    int result = valid_triangle(a, b, c);

    if (result==0) {
        puts("");
        printf("A haromszog megszerkesztheto.\n");
    }
    else if (result == 1) {
        puts("");
        printf("A haromszog nem szerkesztheto.\n");
    }
    else {
        puts("");
        printf("Hibas bemenet(ek).\n");
    }

    return 0;
}
