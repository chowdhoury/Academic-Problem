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

    printf("Enter row number:");
    int n, sum = 0;
    scanf("%d",&n);
    for (int i = 0; i < 3; i++)
    {
        sum += a[n-1][i];
    }
    
    printf("%d",sum);
    return 0;
}