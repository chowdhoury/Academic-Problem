#include <stdio.h>
#include <string.h>

int main() {
    char a[500];

    gets(a);

    int count = 0;
    char *word = "the";
    char *position = a;

    while ((position = strstr(position, word)) != NULL) {
        count++;
        position += strlen(word);
    }

    printf("%d\n", count);

    return 0;
}
