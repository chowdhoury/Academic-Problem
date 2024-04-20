#include <stdio.h>
int a , b ;
void Raihan()
{
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    scanf("%d %d",&a,&b);
    Raihan(a,b);
    printf("%d %d",a,b);
    return 0;
}
