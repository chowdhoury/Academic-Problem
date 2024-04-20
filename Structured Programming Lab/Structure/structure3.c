#include<stdio.h>
struct time{
    int hr;
    int min;
    int sec;
};
int main()
{
    struct time start,end,diff;
    scanf("%d %d %d",&start.hr,&start.min,&start.sec);
    scanf("%d %d %d",&end.hr,&end.min,&end.sec); 

     if(start.sec > end.sec)
    {
        end.sec+= 60;
        --end.min;
    }

    if(start.min > end.min)
    {
        end.min += 60;
        --end.hr;
    }

    diff.sec = end.sec - start.sec;
    diff.min = end.min - start.min;
    diff.hr = end.hr - start.hr;

    printf("Difference = %d : %d : %d", diff.hr, diff.min, diff.sec);
    
    return 0;
}