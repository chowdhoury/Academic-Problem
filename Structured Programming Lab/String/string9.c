#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0}; 

    gets(str);
    int size=strlen(str);
    for (int i = 0; i<size; ++i) {
        count[str[i]]++;
    }

    for (int i = 0; i < 256; ++i) {
        if (count[i] > 0) {
            printf("'%c': %d times\n", i, count[i]);
        }
    }
    return 0;
}
