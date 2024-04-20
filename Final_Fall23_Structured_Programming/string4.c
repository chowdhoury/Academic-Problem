#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char a[100];
    gets(a);
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        
        if (isupper(a[i]))
        {
            a[i]=tolower(a[i]);
        }else
        {
            a[i]=toupper(a[i]);
        }
        
    }
    printf("%s\n",a);

    return 0;
}