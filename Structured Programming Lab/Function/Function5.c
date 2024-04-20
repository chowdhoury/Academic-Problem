#include<stdio.h>
void Raihan()
{
    int a, sum = 0 ;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a);
        sum += a;
    }

    printf("%.2lf\n",sum/5.00);
    
}
int main()
{
    Raihan();
    return 0;
}