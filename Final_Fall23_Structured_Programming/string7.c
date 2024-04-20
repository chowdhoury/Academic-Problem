#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int count = 0, n = strlen(a);
    char ch;
    scanf("%c",&ch);
    for (int i = 0; i < n; i++)
    {
        if (ch == a[i])
        {
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}