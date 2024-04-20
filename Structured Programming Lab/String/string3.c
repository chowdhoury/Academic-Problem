#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], mainStr[100];
    scanf("%s", str1);
    scanf("%s", str2);

    if (strstr(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}