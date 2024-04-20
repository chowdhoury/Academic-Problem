#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[500], str2[500];
    int i, j = 0;

    gets(str1);

    for (i = 0; i < strlen(str1); i++) {
        if (isalpha(str1[i])) {
            str2[j++] = str1[i];
        }
    }

    str2[j] = '\0';
    printf("%s\n", str2);
    return 0;
}
