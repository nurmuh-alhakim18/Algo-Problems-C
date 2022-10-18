#include <stdio.h>

int main()
{
    long long int a,b,c,d,total,totala;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    total = a*b;
    totala = c+d;
    if(total>totala){
        printf("True\n");
    }
    else {
        printf("False\n");
    }
    return 0;
}
