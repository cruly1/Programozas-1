#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rendez(int hossz, int tomb[]) {
    int tmp;
    for (int i=0; i<hossz; i++) {
        for (int j=i; j<hossz; j++) {
            if (tomb[i] > tomb[j]) {
                tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            }
        }
    }
}

void kulonbozo_elemek(int hossz, int tomb[], int also, int felso) {
    for (int i=0; i<hossz; i++) {
        tomb[i] = rand() % (felso - also + 1) + also;
    }

    for (int i = 0; i < hossz; i++) {
        for (int j = i + 1; j < hossz; j++) {
            if (tomb[i] == tomb[j]) {
                tomb[i] = rand() % (felso - also + 1) + also;
                j = i;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int darab, also, felso;

    printf("Hany darab szamot kersz?\n");
    scanf("%d", &darab);
    printf("Also hatar: ");
    scanf("%d", &also);
    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);
    puts("");

    int tomb[darab];

    kulonbozo_elemek(darab, tomb, also, felso);
    rendez(darab, tomb);

    printf("A generalt szamok: ");
    for (int i=0; i<darab; i++) {
        if (i==0) {
            printf("%d", tomb[i]);
        } else {
            printf(", %d", tomb[i]);
        }
    }
    puts("");

    return 0;
}
