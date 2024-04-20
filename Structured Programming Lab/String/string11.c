#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    int i, count = 1;
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i]=='.' || str[i]==',' || str[i]=='?') {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
