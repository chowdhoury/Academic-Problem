#include<stdio.h>
void Raihan()
{
    int a, sum = 0,n ;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        sum += a;
    }

    printf("%d\n",sum);
    
}
int main()
{
    Raihan();
    return 0;
}