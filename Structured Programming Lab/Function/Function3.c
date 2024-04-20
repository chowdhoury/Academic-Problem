#include<stdio.h>
void Raihan()
{
    int a, sum = 0 ;
    for (int i = 0; i < 5; i++)
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