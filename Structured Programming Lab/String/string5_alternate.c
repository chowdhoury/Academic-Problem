#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    gets(s);
    int size=strlen(s);
    int count = 0;
    for(int i=0;i<size-2;i++){
        if(s[i]=='t' && s[i+1]=='h' && s[i+2]=='e') count++;
    }
    printf("%d\n", count);
    return 0;
}
