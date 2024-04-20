#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int size=strlen(s);
    int alpha=0,digits=0,special=0,vowel=0,space=0,consonants=0;
    for(int i=0;i<size;i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
            alpha++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vowel++;
            }
            else consonants++;
        }
        else if(s[i]>='0' && s[i]<='9') digits++;
        else if(s[i]==' ') space++;
        else special++;
    }
    printf("Total alphabet-%d\nTotal vowel-%d\nTotal consonants-%d\nTotal digits-%d\nTotal spaces-%d\nSpecial characters-%d\n",alpha,vowel,consonants,digits,space,special);
    return 0;
}