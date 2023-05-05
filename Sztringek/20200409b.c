#include <stdio.h>
#include <string.h>

#define MAX 300

int is_valid_c_identifier(const char* input) {
    int hossz = strlen(input);
    if (hossz < 1) {
        return 0;
    }

    if (!((input[0]>=65 && input[0]<=97) || (input[0]>=97 && input[0]<=122) || input[0]== '_')) {
        return 0;
    }

    for (int i=0; i<hossz-1; i++) {
        if ((input[i]=='_') || (input[i]>='A' && input[i]<='Z') || (input[i]>='a' && input[i]<='z') || (input[i]>='0' && input[i]<='9')) {
            continue;
        } else {
            return 0;
        }
    }

    return 1;
}

int main() {
    printf("Adj meg stringeket '*' vegjelig!\n");
    puts("");

    char str[MAX];
    int hossz;
    int res;

    while (1) {
        printf("Input: ");
        fgets(str, MAX, stdin);
        hossz = strlen(str);
        str[hossz - 1] = '\0';

        if (strcmp(str, "*") == 0) {
            break;
        }

        if (is_valid_c_identifier(str)) {
            printf("YES\n");
            puts("");
        } else {
            printf("NO\n");
            puts("");
        }
    }

    return 0;
}
