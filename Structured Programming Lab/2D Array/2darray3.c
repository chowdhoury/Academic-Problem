#include<stdio.h>
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += a[i][i];
    }
    
    printf("%d",sum);
    return 0;
}