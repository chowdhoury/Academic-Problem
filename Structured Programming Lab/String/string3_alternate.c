#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char s1[101];
    char s2[101];
    scanf("%s %s",s1,s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    int cnt=0,j=0;
    for(int i=0;i<len1;i++){
        if(s1[i]==s2[j]){
            cnt++;
            j++;
            if(cnt==len2){
    printf("%s substring exists in %s",s2,s1);
     }
    }
   }
return 0;
}