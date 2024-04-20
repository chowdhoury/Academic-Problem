#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100];
    gets(a);
    for (int i = 0,j = strlen(a)-1; i < j; i++,j--)
    {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }   
    printf("%s",a);
    return 0;
}