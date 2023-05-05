#include <stdio.h>
#include <string.h>

int main() {
    char szam[200];
    int seged = 0;
    int igazi_szam;

    printf("Szam: ");
    scanf("%s", szam);

    int hossz = strlen(szam);

    for (int i=0; i<hossz; i++) {
        seged += szam[i] - '0';
    }

    printf("A szamjegyek osszege: %d\n", seged);

    return 0;
}
