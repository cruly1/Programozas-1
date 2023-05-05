#include <stdio.h>

void bmi_calc(float bmi) {
    if (bmi>=20.5 && bmi<=26.5) {
        puts("");
        printf("Az On testtomegindexe: %f\n", bmi);
        printf("Ennek jelentese: normal\n");
    }
    else if (bmi>26.5 && bmi<31.9) {
        puts("");
        printf("Az On testtomegindexe: %f\n", bmi);
        printf("Ennek jelentese: tulsuly\n");
    }
    else if (bmi>31.9 && bmi<=36.9) {
        puts("");
        printf("Az On testtomegindexe: %f\n", bmi);
        printf("Ennek jelentese: elsofoku elhizas\n");
    }
    else if (bmi>36.9 && bmi<=41.9) {
        puts("");
        printf("Az On testtomegindexe: %f\n", bmi);
        printf("Ennek jelentese: masodfoku elhizas\n");
    }
    else if (bmi>41.9) {
        puts("");
        printf("Az On testtomegindexe: %f\n", bmi);
        printf("Ennek jelentese: harmadfoku elhizas\n");
    }
}

int main() {
    float suly;
    float magassag;
    float bmi;
    char nem[6];

    printf("Testsuly (kg): ");
    scanf("%f", &suly);
    printf("Testmagassag (cm): ");
    scanf("%f", &magassag);

    magassag /= 100;
    bmi = suly/(magassag*magassag);

    bmi_calc(bmi);

    return 0;
}
