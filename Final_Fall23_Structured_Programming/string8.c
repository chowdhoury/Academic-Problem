#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100];
    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
        a[i]= toupper(a[i]);
    }
    printf("%s",a);
    return 0;
}