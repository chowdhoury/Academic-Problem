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
    for (int i = 0, j = 2; i < 3, j >= 0; i++, j--)
    {
        sum += a[i][j];
    }
    
    printf("%d\n",sum);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}